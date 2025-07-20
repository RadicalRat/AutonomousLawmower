#ifndef MOTOR
#define MOTOR

#include <Servo.h>

void motor_speed(int arg);
int get_motor_speed();
void motor_init(int pin);

#endif