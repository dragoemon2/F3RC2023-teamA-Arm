#include "servoMotor.hpp"
#include <mbed.h>

ServoMotor motor(D3);

int main(){
    motor.moveTo(180);
    wait_us(1000);
    while(1){
        //printf("%d %d\n",int(motor.A), int(motor.B));

        wait_us(1);
    }
}
