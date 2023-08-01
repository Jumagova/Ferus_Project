#include "timer_interrupt.h"
#include "motor_functions.h"


TimerManager& TimerManager::getInstance()
{
    static TimerManager instance;
    return instance;
}

TimerManager::TimerManager() : interruptAttached(false), timerInterval(0) {}

void TimerManager::attachInterrupt(uint32_t intervalSeconds)
{
  convertTimeToMicroseconds(intervalSeconds);

  if (!interruptAttached)
  {
    timer = timerBegin(0, 80, true);
    timerAttachInterrupt(timer, &timerInterruptCallbackStatic, true);
    timerAlarmWrite(timer, timerInterval, true);
    timerAlarmEnable(timer);
    interruptAttached = true;
  }
}

void TimerManager::detachInterrupt()
{
  if (interruptAttached)
  {
    timerDetachInterrupt(timer);
    interruptAttached = false;
  }
}

void TimerManager::convertTimeToMicroseconds(uint32_t intervalSeconds)
{
  // Convert seconds to microseconds
  timerInterval = intervalSeconds * 1000000;
}

void TimerManager::timerInterruptCallbackStatic()
{
  // Get the instance and forward the call to the class instance's member function
  TimerManager::getInstance().timerInterruptCallback();
}

void TimerManager::timerInterruptCallback()
{
  MotorFunctions& motor = MotorFunctions::getInstance();
 	motor.turnOnMotor(1);
}
