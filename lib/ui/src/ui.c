// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: Ferus_Project_UI

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////

// SCREEN: ui_welcomeScreen
void ui_welcomeScreen_screen_init(void);
void ui_event_welcomeScreen( lv_event_t * e);
lv_obj_t *ui_welcomeScreen;
lv_obj_t *ui_Logo;
lv_obj_t *ui_LogoText;


// SCREEN: ui_helloScreen
void ui_helloScreen_screen_init(void);
void ui_event_helloScreen( lv_event_t * e);
lv_obj_t *ui_helloScreen;
void ui_event_rightHelloButton( lv_event_t * e);
lv_obj_t *ui_rightHelloButton;
lv_obj_t *ui_helloScreenHeader;

// SCREEN: ui_initScreen
void ui_initScreen_screen_init(void);
void ui_event_initScreen( lv_event_t * e);
lv_obj_t *ui_initScreen;
void ui_event_rightInitButton( lv_event_t * e);
lv_obj_t *ui_rightInitButton;
lv_obj_t *ui_initScreenMainText;
lv_obj_t *ui_initScreenBodyText;
void ui_event_leftInitButton( lv_event_t * e);
lv_obj_t *ui_leftInitButton;

// SCREEN: ui_TouchScreen
void ui_TouchScreen_screen_init(void);
void ui_event_TouchScreen( lv_event_t * e);
lv_obj_t *ui_TouchScreen;
lv_obj_t *ui_TouchScreenHeader;

// SCREEN: ui_selectFoodScreen
void ui_selectFoodScreen_screen_init(void);
lv_obj_t *ui_selectFoodScreen;
void ui_event_selectFoodTypeButton1( lv_event_t * e);
lv_obj_t *ui_selectFoodTypeButton1;
lv_obj_t *ui_selectFoodTypeText1;
void ui_event_selectFoodTypeButton2( lv_event_t * e);
lv_obj_t *ui_selectFoodTypeButton2;
lv_obj_t *ui_selectFoodTypeText2;
void ui_event_selectFoodTypeButton3( lv_event_t * e);
lv_obj_t *ui_selectFoodTypeButton3;
lv_obj_t *ui_selectFoodTypeText3;
void ui_event_selectFoodTypeButton4( lv_event_t * e);
lv_obj_t *ui_selectFoodTypeButton4;
lv_obj_t *ui_selectFoodTypeText4;
lv_obj_t *ui_selectFoodTypeHeaderText;
lv_obj_t *ui_selectFoodFooter;

// SCREEN: ui_selectQuantityScreen
void ui_selectQuantityScreen_screen_init(void);
void ui_event_selectQuantityScreen( lv_event_t * e);
lv_obj_t *ui_selectQuantityScreen;
void ui_event_rightSelectQuantityButton( lv_event_t * e);
lv_obj_t *ui_rightSelectQuantityButton;
void ui_event_leftSelectQuantityButton( lv_event_t * e);
lv_obj_t *ui_leftSelectQuantityButton;
lv_obj_t *ui_selectQuantityHeaderText;
lv_obj_t *ui_selectQuantityBodyText;
lv_obj_t *ui_selectQuantityBodyText2;
void ui_event_selectQuantityRemoveButton( lv_event_t * e);
lv_obj_t *ui_selectQuantityRemoveButton;
void ui_event_selectQuantityAddButton( lv_event_t * e);
lv_obj_t *ui_selectQuantityAddButton;
lv_obj_t *ui_selectQuantityFooter;

// SCREEN: ui_selectTimestampScreen
void ui_selectTimestampScreen_screen_init(void);
void ui_event_selectTimestampScreen( lv_event_t * e);
lv_obj_t *ui_selectTimestampScreen;
void ui_event_rightProcessButton( lv_event_t * e);
lv_obj_t *ui_rightProcessButton;
void ui_event_leftTimestampButton( lv_event_t * e);
lv_obj_t *ui_leftTimestampButton;
lv_obj_t *ui_selectTimestampHeaderText;
lv_obj_t *ui_selectTimestampBodyText;
void ui_event_selectTimestampRemoveButton( lv_event_t * e);
lv_obj_t *ui_selectTimestampRemoveButton;
lv_obj_t *ui_selectTimestampBodyText1;
lv_obj_t *ui_selectTimestampBodyText2;
void ui_event_selectTimestampAddButton( lv_event_t * e);
lv_obj_t *ui_selectTimestampAddButton;
lv_obj_t *ui_selectTimestampBodyText3;
lv_obj_t *ui_selectTimeFooter;
lv_obj_t *ui_selectTimestampFooter;

// SCREEN: ui_infoScreenTypeFood
void ui_infoScreenTypeFood_screen_init(void);
lv_obj_t *ui_infoScreenTypeFood;
lv_obj_t *ui_tableView;
lv_obj_t *ui_infoScreenFuctionInfo;
void ui_event_infoScreenInitButton( lv_event_t * e);
lv_obj_t *ui_infoScreenInitButton;
lv_obj_t *ui_Label11;
void ui_event_infoScreenDispenseButton( lv_event_t * e);
lv_obj_t *ui_infoScreenDispenseButton;
lv_obj_t *ui_Label12;
void ui_event_infoScreenConfiguratioButton( lv_event_t * e);
lv_obj_t *ui_infoScreenConfiguratioButton;
lv_obj_t *ui_Label13;
void ui_event_infoScreenStopButton( lv_event_t * e);
lv_obj_t *ui_infoScreenStopButton;
lv_obj_t *ui_Label14;
lv_obj_t *ui_infoScreenSummaryInfo;
lv_obj_t *ui_infoScreenTypeFoodHeader;
lv_obj_t *ui_infoScreenTypeFoodInfo;
lv_obj_t *ui_infoScreenQuantityHeader;
lv_obj_t *ui_infoScreenQuantityInfo;
lv_obj_t *ui_infoScreenQuantityTag;
lv_obj_t *ui_infoScreenFrecuencyHeader;
lv_obj_t *ui_infoScreenFrecuencyInfo;
lv_obj_t *ui_infoScreenFrecuencyHoursTag;
lv_obj_t *ui_infoScreenFrecuencyMinutesInfo;
lv_obj_t *ui_infoScreenFrecuencyMinutesTag;
lv_obj_t *ui_infoScreenFooter;
lv_obj_t *ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_welcomeScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOADED) {
      _ui_screen_change( ui_helloScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 5000);
}
}
void ui_event_helloScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( ui_initScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
}
}
void ui_event_rightHelloButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_initScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
}
}
void ui_event_initScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( ui_TouchScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
}
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( ui_helloScreen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
}
}
void ui_event_rightInitButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_TouchScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
}
}
void ui_event_leftInitButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_helloScreen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
}
}
void ui_event_TouchScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_selectFoodScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
}
}
void ui_event_selectFoodTypeButton1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_selectQuantityScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
}
if ( event_code == LV_EVENT_CLICKED) {
      foodType1( e );
}
if ( event_code == LV_EVENT_PRESSED) {
      _ui_state_modify( ui_selectFoodTypeText1, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);
}
if ( event_code == LV_EVENT_RELEASED) {
      _ui_state_modify( ui_selectFoodTypeText1, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
}
}
void ui_event_selectFoodTypeButton2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_selectQuantityScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
}
if ( event_code == LV_EVENT_CLICKED) {
      foodType2( e );
}
if ( event_code == LV_EVENT_PRESSED) {
      _ui_state_modify( ui_selectFoodTypeText2, LV_STATE_PRESSED, _UI_MODIFY_STATE_ADD);
}
if ( event_code == LV_EVENT_RELEASED) {
      _ui_state_modify( ui_selectFoodTypeText2, LV_STATE_PRESSED, _UI_MODIFY_STATE_REMOVE);
}
}
void ui_event_selectFoodTypeButton3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_selectQuantityScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
}
if ( event_code == LV_EVENT_CLICKED) {
      foodType4( e );
}
if ( event_code == LV_EVENT_PRESSED) {
      _ui_state_modify( ui_selectFoodTypeText3, LV_STATE_PRESSED, _UI_MODIFY_STATE_ADD);
}
if ( event_code == LV_EVENT_RELEASED) {
      _ui_state_modify( ui_selectFoodTypeText3, LV_STATE_PRESSED, _UI_MODIFY_STATE_REMOVE);
}
}
void ui_event_selectFoodTypeButton4( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_selectQuantityScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
}
if ( event_code == LV_EVENT_CLICKED) {
      foodType3( e );
}
if ( event_code == LV_EVENT_PRESSED) {
      _ui_state_modify( ui_selectFoodTypeText4, LV_STATE_PRESSED, _UI_MODIFY_STATE_ADD);
}
if ( event_code == LV_EVENT_CLICKED) {
      _ui_state_modify( ui_selectFoodTypeText4, LV_STATE_PRESSED, _UI_MODIFY_STATE_REMOVE);
}
}
void ui_event_selectQuantityScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( ui_selectTimestampScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
}
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( ui_selectFoodScreen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
}
}
void ui_event_rightSelectQuantityButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_selectTimestampScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
}
}
void ui_event_leftSelectQuantityButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_selectFoodScreen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
}
}
void ui_event_selectQuantityRemoveButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_LONG_PRESSED_REPEAT) {
      removeSelectQuantityLongPressed( e );
}
if ( event_code == LV_EVENT_CLICKED) {
      removeSelectQuantityClicked( e );
}
}
void ui_event_selectQuantityAddButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      addSelectQuantityClicked( e );
}
if ( event_code == LV_EVENT_LONG_PRESSED_REPEAT) {
      addSelectQuantityLongPressed( e );
}
}
void ui_event_selectTimestampScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( ui_infoScreenTypeFood, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
}
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( ui_selectQuantityScreen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
}
}
void ui_event_rightProcessButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_infoScreenTypeFood, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
}
}
void ui_event_leftTimestampButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( ui_selectQuantityScreen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
}
}
void ui_event_selectTimestampRemoveButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      removeSelectTimestampClicked( e );
}
if ( event_code == LV_EVENT_LONG_PRESSED_REPEAT) {
      removeSelectTimestampLongPressed( e );
}
}
void ui_event_selectTimestampAddButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      addSelectTimestampClicked( e );
}
if ( event_code == LV_EVENT_LONG_PRESSED_REPEAT) {
      addSelectTimestampLongPressed( e );
}
}
void ui_event_infoScreenInitButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      initFunction( e );
      _ui_state_modify( ui_infoScreenFuctionInfo, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);
}
}
void ui_event_infoScreenDispenseButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      forceDistributionFunction( e );
}
}
void ui_event_infoScreenConfiguratioButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      stopFunction(e);
      _ui_state_modify( ui_infoScreenFuctionInfo, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
      _ui_screen_change( ui_selectFoodScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
}
}
void ui_event_infoScreenStopButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      stopFunction( e );
      _ui_state_modify( ui_infoScreenFuctionInfo, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_welcomeScreen_screen_init();
ui_helloScreen_screen_init();
ui_initScreen_screen_init();
ui_TouchScreen_screen_init();
ui_selectFoodScreen_screen_init();
ui_selectQuantityScreen_screen_init();
ui_selectTimestampScreen_screen_init();
ui_infoScreenTypeFood_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_welcomeScreen);
}
