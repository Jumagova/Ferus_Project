#ifndef TIMERMANAGER_H
#define TIMERMANAGER_H

#include <Arduino.h>
#include <esp32-hal-timer.h>

class TimerManager {
public:

  static TimerManager& getInstance();
  void attachInterrupt(uint32_t intervalSeconds);
  void detachInterrupt();
  void convertTimeToMicroseconds(uint32_t intervalSeconds);

  static void timerInterruptCallbackStatic();
  void timerInterruptCallback();

  bool interruptFlag; // Add this flag

private:
  TimerManager();
  hw_timer_t * timer = NULL;
  bool interruptAttached;
  uint32_t timerInterval;
};

#endif // TIMERMANAGER_H