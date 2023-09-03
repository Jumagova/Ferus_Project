// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: Ferus_Project_UI

#include "../ui.h"

void ui_selectTimestampScreen_screen_init(void)
{
ui_selectTimestampScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_selectTimestampScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_selectTimestampScreen, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_selectTimestampScreen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_rightProcessButton = lv_imgbtn_create(ui_selectTimestampScreen);
lv_imgbtn_set_src(ui_rightProcessButton, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_arrow_forward_png, NULL);
lv_imgbtn_set_src(ui_rightProcessButton, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_arrow_forward_png, NULL);
lv_obj_set_width( ui_rightProcessButton, 65);
lv_obj_set_height( ui_rightProcessButton, 65);
lv_obj_set_x( ui_rightProcessButton, lv_pct(42) );
lv_obj_set_y( ui_rightProcessButton, lv_pct(0) );
lv_obj_set_align( ui_rightProcessButton, LV_ALIGN_CENTER );

ui_leftTimestampButton = lv_imgbtn_create(ui_selectTimestampScreen);
lv_imgbtn_set_src(ui_leftTimestampButton, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_arrow_back_png, NULL);
lv_imgbtn_set_src(ui_leftTimestampButton, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_arrow_back_png, NULL);
lv_obj_set_width( ui_leftTimestampButton, 65);
lv_obj_set_height( ui_leftTimestampButton, 65);
lv_obj_set_x( ui_leftTimestampButton, lv_pct(-42) );
lv_obj_set_y( ui_leftTimestampButton, lv_pct(0) );
lv_obj_set_align( ui_leftTimestampButton, LV_ALIGN_CENTER );

ui_selectTimestampHeaderText = lv_label_create(ui_selectTimestampScreen);
lv_obj_set_width( ui_selectTimestampHeaderText, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_selectTimestampHeaderText, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_selectTimestampHeaderText, lv_pct(0) );
lv_obj_set_y( ui_selectTimestampHeaderText, lv_pct(-40) );
lv_obj_set_align( ui_selectTimestampHeaderText, LV_ALIGN_CENTER );
lv_label_set_text(ui_selectTimestampHeaderText,"¿Cáda cuanto tiempo desea dispensar?");
lv_obj_set_style_text_color(ui_selectTimestampHeaderText, lv_color_hex(0x514949), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_selectTimestampHeaderText, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_selectTimestampHeaderText, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_selectTimestampHeaderText, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_selectTimestampHeaderText, &ui_font_BoldFont, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_selectTimestampBodyText = lv_label_create(ui_selectTimestampScreen);
lv_obj_set_width( ui_selectTimestampBodyText, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_selectTimestampBodyText, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_selectTimestampBodyText, lv_pct(-12) );
lv_obj_set_y( ui_selectTimestampBodyText, lv_pct(-13) );
lv_obj_set_align( ui_selectTimestampBodyText, LV_ALIGN_CENTER );
lv_label_set_text(ui_selectTimestampBodyText,"0");
lv_obj_set_style_text_color(ui_selectTimestampBodyText, lv_color_hex(0x514949), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_selectTimestampBodyText, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_selectTimestampBodyText, &lv_font_montserrat_44, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_selectTimestampRemoveButton = lv_imgbtn_create(ui_selectTimestampScreen);
lv_imgbtn_set_src(ui_selectTimestampRemoveButton, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_difference_white_png, NULL);
lv_imgbtn_set_src(ui_selectTimestampRemoveButton, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_difference_white_png, NULL);
lv_obj_set_width( ui_selectTimestampRemoveButton, 65);
lv_obj_set_height( ui_selectTimestampRemoveButton, 65);
lv_obj_set_x( ui_selectTimestampRemoveButton, lv_pct(-11) );
lv_obj_set_y( ui_selectTimestampRemoveButton, lv_pct(14) );
lv_obj_set_align( ui_selectTimestampRemoveButton, LV_ALIGN_CENTER );
lv_obj_set_style_radius(ui_selectTimestampRemoveButton, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_selectTimestampRemoveButton, lv_color_hex(0x808122), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_selectTimestampRemoveButton, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_selectTimestampRemoveButton, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_img_recolor(ui_selectTimestampRemoveButton, lv_color_hex(0x514949), LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_img_recolor_opa(ui_selectTimestampRemoveButton, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_selectTimestampRemoveButton, 5, LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_bg_color(ui_selectTimestampRemoveButton, lv_color_hex(0x808122), LV_PART_MAIN | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_selectTimestampRemoveButton, 255, LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_img_recolor(ui_selectTimestampRemoveButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_img_recolor_opa(ui_selectTimestampRemoveButton, 255, LV_PART_MAIN| LV_STATE_PRESSED);

ui_selectTimestampBodyText1 = lv_label_create(ui_selectTimestampScreen);
lv_obj_set_width( ui_selectTimestampBodyText1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_selectTimestampBodyText1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_selectTimestampBodyText1, lv_pct(9) );
lv_obj_set_y( ui_selectTimestampBodyText1, lv_pct(-13) );
lv_obj_set_align( ui_selectTimestampBodyText1, LV_ALIGN_CENTER );
lv_label_set_text(ui_selectTimestampBodyText1,"1");
lv_obj_set_style_text_color(ui_selectTimestampBodyText1, lv_color_hex(0x514949), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_selectTimestampBodyText1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_selectTimestampBodyText1, &lv_font_montserrat_40, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_selectTimestampBodyText2 = lv_label_create(ui_selectTimestampScreen);
lv_obj_set_width( ui_selectTimestampBodyText2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_selectTimestampBodyText2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_selectTimestampBodyText2, lv_pct(21) );
lv_obj_set_y( ui_selectTimestampBodyText2, lv_pct(-11) );
lv_obj_set_align( ui_selectTimestampBodyText2, LV_ALIGN_CENTER );
lv_label_set_text(ui_selectTimestampBodyText2,"min");
lv_obj_set_style_text_color(ui_selectTimestampBodyText2, lv_color_hex(0x514949), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_selectTimestampBodyText2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_selectTimestampBodyText2, &ui_font_RegularFont, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_selectTimestampAddButton = lv_imgbtn_create(ui_selectTimestampScreen);
lv_imgbtn_set_src(ui_selectTimestampAddButton, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_plus_white_png, NULL);
lv_imgbtn_set_src(ui_selectTimestampAddButton, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_plus_white_png, NULL);
lv_obj_set_width( ui_selectTimestampAddButton, 65);
lv_obj_set_height( ui_selectTimestampAddButton, 65);
lv_obj_set_x( ui_selectTimestampAddButton, lv_pct(11) );
lv_obj_set_y( ui_selectTimestampAddButton, lv_pct(14) );
lv_obj_set_align( ui_selectTimestampAddButton, LV_ALIGN_CENTER );
lv_obj_set_style_radius(ui_selectTimestampAddButton, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_selectTimestampAddButton, lv_color_hex(0x808122), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_selectTimestampAddButton, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_selectTimestampAddButton, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_img_recolor(ui_selectTimestampAddButton, lv_color_hex(0x514949), LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_img_recolor_opa(ui_selectTimestampAddButton, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_selectTimestampAddButton, 5, LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_bg_color(ui_selectTimestampAddButton, lv_color_hex(0x808122), LV_PART_MAIN | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_selectTimestampAddButton, 255, LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_img_recolor(ui_selectTimestampAddButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_img_recolor_opa(ui_selectTimestampAddButton, 255, LV_PART_MAIN| LV_STATE_PRESSED);

ui_selectTimestampBodyText3 = lv_label_create(ui_selectTimestampScreen);
lv_obj_set_width( ui_selectTimestampBodyText3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_selectTimestampBodyText3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_selectTimestampBodyText3, lv_pct(-3) );
lv_obj_set_y( ui_selectTimestampBodyText3, lv_pct(-11) );
lv_obj_set_align( ui_selectTimestampBodyText3, LV_ALIGN_CENTER );
lv_label_set_text(ui_selectTimestampBodyText3,"h :");
lv_obj_set_style_text_color(ui_selectTimestampBodyText3, lv_color_hex(0x514949), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_selectTimestampBodyText3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_selectTimestampBodyText3, &ui_font_RegularFont, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_selectTimeFooter = lv_label_create(ui_selectTimestampScreen);
lv_obj_set_width( ui_selectTimeFooter, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_selectTimeFooter, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_selectTimeFooter, lv_pct(0) );
lv_obj_set_y( ui_selectTimeFooter, lv_pct(44) );
lv_obj_set_align( ui_selectTimeFooter, LV_ALIGN_CENTER );
lv_label_set_text(ui_selectTimeFooter,"Ferus Smart - Elección inteligente para una nutrición saludable");
lv_obj_set_style_text_color(ui_selectTimeFooter, lv_color_hex(0x514949), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_selectTimeFooter, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_selectTimeFooter, &ui_font_RegularSmallFont, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_rightProcessButton, ui_event_rightProcessButton, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_leftTimestampButton, ui_event_leftTimestampButton, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_selectTimestampRemoveButton, ui_event_selectTimestampRemoveButton, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_selectTimestampAddButton, ui_event_selectTimestampAddButton, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_selectTimestampScreen, ui_event_selectTimestampScreen, LV_EVENT_ALL, NULL);

}
