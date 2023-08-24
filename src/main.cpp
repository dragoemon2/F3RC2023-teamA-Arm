#include "servoMotor.hpp"
#include <mbed.h>

ServoMotor motor(D3);

int main(){
    motor.moveTo(60);
    wait_us(1000000*3);
    motor.moveTo(180);
    wait_us(1000000*10);
}
