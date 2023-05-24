#include "Arduino.h"
#include "motor_functions.h"

void MotorFunctions::updateMotor()
{
    unsigned long currentMillis = millis();
    if (motorState == MOTOR_ON && currentMillis - motorLastTime >= motorPeriod)
    {
        motorDutyCycle = (motorDutyCycle == 0) ? 255 : 0;
        analogWrite(PULL, motorDutyCycle);
        motorLastTime = currentMillis;
    }
}

void MotorFunctions::turnOnMotor(int direction)
{
    motorDirection = direction;
    motorState = MOTOR_ON;
}

void MotorFunctions::turnOffMotor()
{
    analogWrite(PULL, 255); // set duty cycle to a very low value
    motorState = MOTOR_OFF;
}