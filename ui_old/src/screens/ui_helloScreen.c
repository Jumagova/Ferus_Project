// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: Ferus_Project_UI

#include "../ui.h"

void ui_helloScreen_screen_init(void)
{
ui_helloScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_helloScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_helloScreen, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_helloScreen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_rightHelloButton = lv_imgbtn_create(ui_helloScreen);
lv_imgbtn_set_src(ui_rightHelloButton, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_arrow_forward_png, NULL);
lv_imgbtn_set_src(ui_rightHelloButton, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_arrow_forward_png, NULL);
lv_obj_set_width( ui_rightHelloButton, 65);
lv_obj_set_height( ui_rightHelloButton, 65);
lv_obj_set_x( ui_rightHelloButton, lv_pct(42) );
lv_obj_set_y( ui_rightHelloButton, lv_pct(0) );
lv_obj_set_align( ui_rightHelloButton, LV_ALIGN_CENTER );

ui_helloScreenHeader = lv_label_create(ui_helloScreen);
lv_obj_set_width( ui_helloScreenHeader, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_helloScreenHeader, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_helloScreenHeader, LV_ALIGN_CENTER );
lv_label_set_text(ui_helloScreenHeader,"Hola");
lv_obj_set_style_text_color(ui_helloScreenHeader, lv_color_hex(0x514949), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_helloScreenHeader, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_helloScreenHeader, &ui_font_BoldBigFont, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_rightHelloButton, ui_event_rightHelloButton, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_helloScreen, ui_event_helloScreen, LV_EVENT_ALL, NULL);

}