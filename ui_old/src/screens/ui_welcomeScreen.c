// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: Ferus_Project_UI

#include "../ui.h"

void ui_welcomeScreen_screen_init(void)
{
ui_welcomeScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_welcomeScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_welcomeScreen, lv_color_hex(0x808122), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_welcomeScreen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Logo = lv_img_create(ui_welcomeScreen);
lv_img_set_src(ui_Logo, &ui_img_ferus_smart_logo_png);
lv_obj_set_width( ui_Logo, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Logo, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Logo, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Logo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Logo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_zoom(ui_Logo,255);

lv_obj_add_event_cb(ui_welcomeScreen, ui_event_welcomeScreen, LV_EVENT_ALL, NULL);

}