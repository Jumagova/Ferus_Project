SET(SOURCES screens/ui_welcomeScreen.c
    screens/ui_helloScreen.c
    screens/ui_initScreen.c
    screens/ui_selectFoodScreen.c
    screens/ui_selectQuantityScreen.c
    screens/ui_selectTimestampScreen.c
    screens/ui_infoScreenTypeFood.c
    ui.c
    ui_helpers.c
    ui_events.c
    images/ui_img_horsesilhouette_png.c
    images/ui_img_arrowforward_png.c
    images/ui_img_arrowback_png.c
    images/ui_img_remove_png.c
    images/ui_img_add_png.c)

add_library(ui ${SOURCES})
