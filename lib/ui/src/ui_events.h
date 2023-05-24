// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: Ferus_Project_UI

#ifndef _UI_EVENTS_H
#define _UI_EVENTS_H

#ifdef __cplusplus
extern "C" {
#endif

void foodType2(lv_event_t * e);
void foodType1(lv_event_t * e);
void foodType3(lv_event_t * e);
void removeSelectQuantityLongPressed(lv_event_t * e);
void removeSelectQuantityClicked(lv_event_t * e);
void addSelectQuantityClicked(lv_event_t * e);
void addSelectQuantityLongPressed(lv_event_t * e);
void removeSelectTimestampClicked(lv_event_t * e);
void removeSelectTimestampLongPressed(lv_event_t * e);
void addSelectTimestampClicked(lv_event_t * e);
void addSelectTimestampLongPressed(lv_event_t * e);
void initFunction(lv_event_t * e);
void forceDistributionFunction(lv_event_t * e);
void stopFunction(lv_event_t * e);

extern void saveStringData(const char *key, const char *value);
extern void getStringData(const char *key, char *buffer, size_t bufferSize);
extern void saveUIntData(const char *key, uint32_t value);
extern void getUIntData(const char *key, uint32_t value);
extern void deleteData(const char* key);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
