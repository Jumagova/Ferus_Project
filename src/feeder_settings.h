#ifndef FEEDER_SETTINGS_H
#define FEEDER_SETTINGS_H

#include "Arduino.h"

class FeederSettings
{
public:
    static FeederSettings &getInstance();

    void loadSettingsFromStorage();
    bool isActivated();
    void updateUI();
    void startMotorAndTimer();

    // Getters for the private members if needed
    uint32_t getQuantity() const { return quantity; }
    uint32_t getTotalTimeInSeconds() const { return total_time_in_seconds; }
    const char *getFoodSelected() const { return food_selected; }
    void selectFood(int foodNumber);
    void removeQuantity(uint32_t quantity_changed);
    void addQuantity(uint32_t quantity_changed);
    void removeTime(uint32_t time_in_minutes_to_be_change);
    void addTime(uint32_t time_in_minutes_to_be_changed);

private:
    FeederSettings();

    FeederSettings(const FeederSettings &) = delete;
    FeederSettings &operator=(const FeederSettings &) = delete;

    uint32_t quantity;
    uint32_t total_time_in_seconds;
    bool activated;
    char quantity_text[10];
    char hours_text[6];
    char minutes_text[4];
    char food_selected[20];
    const char *foodType[4] = {"Peletizado", "Croquetas", "Mixto", "Cubos de heno"};
    uint32_t hours;
    uint32_t minutes;
};

#endif // FEEDER_SETTINGS_H
