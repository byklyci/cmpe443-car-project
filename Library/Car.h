#ifndef CAR_H
#define CAR_H

#include "LPC407x_8x_177x_8x.h"
#include "GPIO.h"
#include "PWM.h"
#include "Joystick.h"
#include "LED.h"
#include "Motor.h"
#include "Ultrasonic.h"
#include "Trimpot.h"
#include "LDR.h"
#include "External.h"
#include "Serial.h"
#include "ESP8266.h"
#include "Parameters.h"

extern int speed;
extern int mode;
extern int active;
extern int turnCount;

// Sensor values
extern uint32_t distance;
extern uint32_t LDR_Left_Value;
extern uint32_t LDR_Right_Value;
extern uint32_t LDR_Difference;

typedef enum {
	AUTO   = '#',
	MANUEL = '*',
}               Car_Mode;

void Car_Init(void);

void goForward(void);

void goBackward(void);

void turnRight(int rate, int flag);

void turnLeft(int rate, int flag);

void stopCar(void);

void updateSensorValues(void);

char toggleMode(void);

void setMode(int nMode);

void startEscape(void);

void endEscape(void);

void setFlags(int turnLeft, int turnRight, int forward, int backward);

int isMoving(void);

void checkWifiMode(void);

#endif
