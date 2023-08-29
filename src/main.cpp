#include <Arduino.h>
#include <screen_config.h>
#include <lvgl.h>
#include <ui.h>
#include <Preferences.h>
#include "storage_memory.h"
#include "motor_functions.h"
#include "timer_interrupt.h"

/*Change to your screen resolution*/
static const uint16_t screenWidth = 480;
static const uint16_t screenHeight = 320;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * screenHeight / 10];

LGFX tft;

/* Display flushing */

void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.writePixels((lgfx::rgb565_t *)&color_p->full, w * h);
  tft.endWrite();
  lv_disp_flush_ready(disp);
}

/*Read the touchpad*/
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
  uint16_t touchX, touchY;
  bool touched = tft.getTouch(&touchX, &touchY);
  if (!touched)
  {
    data->state = LV_INDEV_STATE_REL;
  }
  else
  {
    data->state = LV_INDEV_STATE_PR;
    data->point.x = touchX;
    data->point.y = touchY;
  }
}

void checkBool()
{
  TimerManager &timerManager = TimerManager::getInstance();
  MotorFunctions &motor = MotorFunctions::getInstance();
  InternalMemoryStorage &storage = InternalMemoryStorage::getInstance("storage_data");

  bool isActivated = storage.getBoolData("isActivated");
  uint32_t quantity;
  storage.getUIntData("quantity", quantity);
  uint32_t timestamp;
  storage.getUIntData("timestamp", timestamp);
  char food_selected[20];
  storage.getStringData("food_selected", food_selected, sizeof(food_selected));
  char quantity_text[10];
  char timestamp[10];
  if (isActivated && timestamp != 0 && quantity != 0)
  {
    _ui_screen_change(ui_infoScreenTypeFood, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    motor.calculateTime();
    motor.turnOnMotor(1);

    storage.saveBoolData("isActivated", true);
    timerManager.attachInterrupt(timestamp);

    lv_label_set_text(ui_infoScreenFuctionInfo, "Alimentador en funcionamiento");
    sprintf(quantity_text, "%d", quantity);
    sprintf(quantity_text, "%d", quantity);
    lv_label_set_text(ui_infoScreenQuantityInfo, quantity_text);
  }
}

// void uiTask(void *parameter);
// void motorTask(void *parameter);

void setup()
{
  Serial.begin(115200); /* prepare for possible serial debug */
  lv_init();

#if LV_USE_LOG != 0
  lv_log_register_print_cb(my_print); /* register print function for debugging */
#endif

  tft.begin();        /* TFT init */
  tft.setRotation(3); /* Landscape orientation, flipped */

  lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * screenHeight / 10);

  /*Initialize the display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  /*Change the following line to your display resolution*/
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  /*Initialize the (dummy) input device driver*/
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);

  MotorFunctions &motor = MotorFunctions::getInstance();
  motor.initialize();
  ui_init();

  // Serial.println("Setup done");
}

void loop()
{
  tft.setBrightness(255);
  lv_timer_handler();
  MotorFunctions &motor = MotorFunctions::getInstance();
  motor.updateMotor();
}
