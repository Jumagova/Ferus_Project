// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: Ferus_Project_UI

#include "../ui.h"

void ui_selectFoodScreen_screen_init(void)
{
ui_selectFoodScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_selectFoodScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_selectFoodTypeButton2 = lv_btn_create(ui_selectFoodScreen);
lv_obj_set_width( ui_selectFoodTypeButton2, lv_pct(20));
lv_obj_set_height( ui_selectFoodTypeButton2, lv_pct(20));
lv_obj_set_x( ui_selectFoodTypeButton2, lv_pct(0) );
lv_obj_set_y( ui_selectFoodTypeButton2, lv_pct(20) );
lv_obj_set_align( ui_selectFoodTypeButton2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_selectFoodTypeButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_selectFoodTypeButton2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_initFooterButtonText1 = lv_label_create(ui_selectFoodTypeButton2);
lv_obj_set_width( ui_initFooterButtonText1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_initFooterButtonText1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_initFooterButtonText1, LV_ALIGN_CENTER );
lv_label_set_text(ui_initFooterButtonText1,"Pellets");

ui_selectFoodTypeHeaderText = lv_label_create(ui_selectFoodScreen);
lv_obj_set_width( ui_selectFoodTypeHeaderText, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_selectFoodTypeHeaderText, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_selectFoodTypeHeaderText, lv_pct(0) );
lv_obj_set_y( ui_selectFoodTypeHeaderText, lv_pct(-25) );
lv_obj_set_align( ui_selectFoodTypeHeaderText, LV_ALIGN_CENTER );
lv_label_set_text(ui_selectFoodTypeHeaderText,"Escoge el tipo de alimento");
lv_obj_set_style_text_align(ui_selectFoodTypeHeaderText, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_selectFoodTypeHeaderText, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_selectFoodTypeButton1 = lv_btn_create(ui_selectFoodScreen);
lv_obj_set_width( ui_selectFoodTypeButton1, lv_pct(20));
lv_obj_set_height( ui_selectFoodTypeButton1, lv_pct(20));
lv_obj_set_x( ui_selectFoodTypeButton1, lv_pct(-25) );
lv_obj_set_y( ui_selectFoodTypeButton1, lv_pct(20) );
lv_obj_set_align( ui_selectFoodTypeButton1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_selectFoodTypeButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_selectFoodTypeButton1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label1 = lv_label_create(ui_selectFoodTypeButton1);
lv_obj_set_width( ui_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label1,"Croquetas");

ui_Button2 = lv_btn_create(ui_selectFoodScreen);
lv_obj_set_width( ui_Button2, lv_pct(20));
lv_obj_set_height( ui_Button2, lv_pct(20));
lv_obj_set_x( ui_Button2, lv_pct(25) );
lv_obj_set_y( ui_Button2, lv_pct(20) );
lv_obj_set_align( ui_Button2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_selectFoodTypeButton3 = lv_label_create(ui_Button2);
lv_obj_set_width( ui_selectFoodTypeButton3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_selectFoodTypeButton3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_selectFoodTypeButton3, LV_ALIGN_CENTER );
lv_label_set_text(ui_selectFoodTypeButton3,"Cubos de\nHeno");
lv_obj_set_style_text_align(ui_selectFoodTypeButton3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_selectFoodTypeButton2, ui_event_selectFoodTypeButton2, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_selectFoodTypeButton1, ui_event_selectFoodTypeButton1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);

}
