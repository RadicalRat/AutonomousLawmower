#ifndef MOTOR
#define MOTOR

#include <Servo.h>
#include <Arduino.h>

Servo motor;
int lastPWM;


void motor_speed(int arg) {
  arg = constrain(arg, 1000,2000);
  motor.writeMicroseconds(arg);
  lastPWM = arg;
}

int get_motor_speed() {
  return lastPWM;
}

void motor_init(int pin) {
  motor.attach(pin);
  motor.writeMicroseconds(1500);
}

#endif