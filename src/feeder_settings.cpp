#include "feeder_settings.h"
#include "storage_memory.h"
#include "motor_functions.h"
#include "timer_interrupt.h"
#include "lvgl.h"
#include "ui.h"

FeederSettings &FeederSettings::getInstance()
{
    static FeederSettings instance;
    return instance;
}

FeederSettings::FeederSettings()
{
    loadSettingsFromStorage();
}

void FeederSettings::loadSettingsFromStorage()
{
    InternalMemoryStorage &storage = InternalMemoryStorage::getInstance("storage_data");

    storage.getUIntData("quantity", quantity);
    storage.getUIntData("timestamp", total_time_in_seconds);
    storage.getStringData("food_selected", food_selected, sizeof(food_selected));

    hours = total_time_in_seconds / 3600;
    minutes = (total_time_in_seconds % 3600) / 60;

    sprintf(quantity_text, "%u", quantity);
    sprintf(hours_text, "%u", hours);
    sprintf(minutes_text, "%u", minutes);
}

bool FeederSettings::isActivated()
{
    InternalMemoryStorage &storage = InternalMemoryStorage::getInstance("storage_data");
    return storage.getBoolData("isActivated");
}

void FeederSettings::updateUI()
{

    lv_label_set_text(ui_selectQuantityBodyText, quantity_text);
    lv_label_set_text(ui_selectTimestampBodyText, hours_text);
    lv_label_set_text(ui_selectTimestampBodyText1, minutes_text);
    lv_label_set_text(ui_infoScreenQuantityInfo, quantity_text);
    lv_label_set_text(ui_infoScreenFrecuencyInfo, hours_text);
    lv_label_set_text(ui_infoScreenFrecuencyMinutesInfo, minutes_text);
    if (isActivated())
    {
        lv_label_set_text(ui_infoScreenFuctionInfo, "Alimentador en funcionamiento");
        lv_label_set_text(ui_infoScreenTypeFoodInfo, food_selected);
        lv_label_set_text(ui_infoScreenQuantityInfo, quantity_text);
        lv_label_set_text(ui_infoScreenFrecuencyInfo, hours_text);
        lv_label_set_text(ui_infoScreenFrecuencyMinutesInfo, minutes_text);
        Serial.print("total time in seconds returned: ");
        Serial.println(total_time_in_seconds);
        Serial.print("total time in hours returned: ");
        Serial.println(hours_text);
        Serial.print("total time in minutes returned: ");
        Serial.println(minutes_text);

        _ui_state_modify(ui_infoScreenFuctionInfo, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);
        _ui_screen_change(ui_infoScreenTypeFood, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}

void FeederSettings::startMotorAndTimer()
{
    if (isActivated())
    {
        MotorFunctions &motor = MotorFunctions::getInstance();
        motor.calculateTime();
        motor.turnOnMotor(1);

        TimerManager &timerManager = TimerManager::getInstance();
        timerManager.attachInterrupt(total_time_in_seconds);
    }
}

void FeederSettings::selectFood(int foodNumber)
{
    strcpy(food_selected, foodType[foodNumber]);
    lv_label_set_text(ui_infoScreenTypeFoodInfo, food_selected);
    InternalMemoryStorage &storage = InternalMemoryStorage::getInstance("storage_data");
    storage.saveStringData("food_selected", food_selected);
}

void FeederSettings::removeQuantity(uint32_t quantity_changed)
{

    if (quantity <= quantity_changed)
    {
        quantity = 500;
    }
    else
    {
        quantity -= quantity_changed;
    }

    sprintf(quantity_text, "%u", quantity);


    lv_label_set_text(ui_selectQuantityBodyText, quantity_text);
    lv_label_set_text(ui_infoScreenQuantityInfo, quantity_text);
    InternalMemoryStorage &storage = InternalMemoryStorage::getInstance("storage_data");
    storage.saveUIntData("quantity", quantity);
}


void FeederSettings::addQuantity(uint32_t quantity_changed)
{
    quantity = quantity + quantity_changed;
    if (quantity > 500)
    {
        quantity = 1;
    }

    sprintf(quantity_text, "%u", quantity);
    lv_label_set_text(ui_selectQuantityBodyText, quantity_text);
    lv_label_set_text(ui_infoScreenQuantityInfo, quantity_text);
    InternalMemoryStorage &storage = InternalMemoryStorage::getInstance("storage_data");
    storage.saveUIntData("quantity", quantity);
}

void FeederSettings::addTime(uint32_t time_in_minutes_to_be_changed)
{
    minutes = minutes + time_in_minutes_to_be_changed;
    if (minutes > 59)
    {
        minutes = 1;
        hours++;
        if (hours > 10)
        {
            hours = 0;
        }
        sprintf(hours_text, "%u", hours);
        lv_label_set_text(ui_selectTimestampBodyText, hours_text);
        lv_label_set_text(ui_infoScreenFrecuencyInfo, hours_text);
    }
    sprintf(minutes_text, "%u", minutes);
    lv_label_set_text(ui_selectTimestampBodyText1, minutes_text);
    lv_label_set_text(ui_infoScreenFrecuencyMinutesInfo, minutes_text);
    total_time_in_seconds = hours * 3600 + minutes * 60;
    InternalMemoryStorage &storage = InternalMemoryStorage::getInstance("storage_data");
    storage.saveUIntData("timestamp", total_time_in_seconds);
}

void FeederSettings::removeTime(uint32_t time_in_minutes_to_be_change)
{
    if (time_in_minutes_to_be_change >= minutes)
    {
        uint32_t overflow_minutes = time_in_minutes_to_be_change - minutes;

        if (hours == 0)
        {
            hours = 10;
            minutes = 59 - overflow_minutes;
        }
        else
        {
            hours--;
            minutes = 59 - overflow_minutes;
        }
    }
    else
    {
        minutes -= time_in_minutes_to_be_change;
    }

    sprintf(hours_text, "%u", hours);
    sprintf(minutes_text, "%u", minutes);

    lv_label_set_text(ui_selectTimestampBodyText, hours_text);
    lv_label_set_text(ui_infoScreenFrecuencyInfo, hours_text);
    lv_label_set_text(ui_selectTimestampBodyText1, minutes_text);
    lv_label_set_text(ui_infoScreenFrecuencyMinutesInfo, minutes_text);

    total_time_in_seconds = hours * 3600 + minutes * 60;
    InternalMemoryStorage &storage = InternalMemoryStorage::getInstance("storage_data");
    storage.saveUIntData("timestamp", total_time_in_seconds);
}
