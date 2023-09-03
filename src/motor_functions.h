#ifndef MOTOR_FUNCTIONS_H
#define MOTOR_FUNCTIONS_H

#include "Arduino.h"

class MotorFunctions
{
public:
    static MotorFunctions &getInstance();

    int timeFoodConstants[4];

    void initialize();
    void updateMotor();
    void calculateTime();
    void turnOnMotor(int direction);
    void turnOffMotor();
    bool isMotorOn() const;

private:
    MotorFunctions(); // Private constructor

    int motorState;
    int motorDirection;
    unsigned long motorPeriod;
    unsigned long motorLastTime;
    int motorDutyCycle;
    int pwmChannel;
    int frequence;
    int resolution;
    int pwmPin;

    // GPIO pin assignments
    const int DIR_MOTOR_PIN = 21;
    const int PULL_MOTOR_PIN = 14;
    const int ENA_MOTOR_PIN = 30;
};

#endif // MOTOR_FUNCTIONS_H
