#include <Arduino.h>

#ifndef MOTOR_FUNCTIONS_H
#define MOTOR_FUNCTIONS_H

class MotorFunctions
{
public:
    // Definition of GPIO atributes used for control Motor driver
    const int DIR = 21;
    const int PULL = 14;
    const int ENA = 30;
    const int MOTOR_OFF = 0;
    const int MOTOR_ON = 1;

    // Definition of atributes used fot control motor
    int motorState = MOTOR_OFF;
    int motorDirection = 0;        // 0 for forward, 1 for reverse
    const unsigned long motorPeriod = 5; // set period to 5ms
    unsigned long motorLastTime = 0;
    int motorDutyCycle = 0; // initial duty cycle value

    void updateMotor();
    void turnOnMotor(int direction);
    void turnOffMotor();


    private:

};

#endif