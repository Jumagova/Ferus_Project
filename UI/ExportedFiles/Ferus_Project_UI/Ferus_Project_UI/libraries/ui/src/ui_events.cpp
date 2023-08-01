#include "motor_functions.h"
#include "storage_memory.h"

MotorFunctions& MotorFunctions::getInstance()
{
    static MotorFunctions instance;
    return instance;
}

MotorFunctions::MotorFunctions()
{
    motorState = false;
    motorDirection = 0;
    motorPeriod = 0;
    motorLastTime = 0;
    motorDutyCycle = 127;
    timeFoodConstants[0] = 5;
    timeFoodConstants[1] = 10;
    timeFoodConstants[2] = 15;
    timeFoodConstants[3] = 20;
    pwmChannel = 0; // Selects channel 0
    frequence = 1000; // PWM frequency of 100 Hz
    resolution = 8; // 8-bit resolution, 256 possible values
    pwmPin = PULL_MOTOR_PIN;
}

void MotorFunctions::initialize()
{
    ledcSetup(pwmChannel, frequence, resolution);
    ledcAttachPin(pwmPin, pwmChannel);
}


void MotorFunctions::updateMotor()
{
    unsigned long currentMillis = millis();
    if (motorState == true)
    {
        calculateTime();
        if (currentMillis - motorLastTime >= motorPeriod)
        {
            turnOffMotor();
        }
        else
        {
            ledcWrite(pwmChannel, motorDutyCycle); 
        }
    }
}

void MotorFunctions::calculateTime(){
    InternalMemoryStorage& storage = InternalMemoryStorage::getInstance("storage_data");
    char food_selected[20];
    storage.getStringData("food_selected", food_selected, sizeof(food_selected));
    uint32_t quantity;
    storage.getUIntData("quantity", quantity);
    const char *foodType[4] = {"Peletizado", "Croquetas", "Mixto", "Cubos de heno"};
    if (strcmp(food_selected, foodType[0]) == 0)
    {
        motorPeriod = timeFoodConstants[0] * 1000 * quantity;
    } 
    else if (strcmp(food_selected, foodType[1]) == 0)
    {
        motorPeriod = timeFoodConstants[1] * 1000 * quantity;
    } 
    else if (strcmp(food_selected, foodType[2]) == 0)
    {
        motorPeriod = timeFoodConstants[2] * 1000 * quantity;
    } 
    else if (strcmp(food_selected, foodType[3]) == 0)
    {
        motorPeriod = timeFoodConstants[3] * 1000 * quantity;
    }
    else 
    {
        Serial.println("Error: Unexpected food_selected value.");
        motorPeriod = 5000;
    }
}

void MotorFunctions::turnOnMotor(int direction)
{   
    motorDirection = direction;
    motorLastTime = millis();
    motorState = true;
}

void MotorFunctions::turnOffMotor()
{
    ledcWrite(pwmChannel, 256); 
    motorState = false;
}

bool MotorFunctions::isMotorOn() const
{
    return motorState;
}
