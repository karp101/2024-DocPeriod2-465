#include <kipr/wombat.h>
int f = 100;


int main()
{
    // leave start
    enable_servos();
    set_servo_position(0,1560);
    set_servo_position(1,550);
    msleep(500);
    motor_power(2,f);
    motor_power(1,f);
    msleep(1000);
    ao();
    //turn

    motor_power(2,80);
    motor_power(1,f);
    msleep(3300);
    ao();

    set_servo_position(1,1050);
    msleep(1000);

    motor_power(2,-f);
    motor_power(1,-f);
    msleep(1000);

    set_servo_position(1,400);
    motor_power(2,-74);
    motor_power(1,-f);
    msleep(1100);
    ao();
    set_servo_position(0,550);
    msleep(700);
    ao();

    //go to black line
    while (analog(0) < 3600) {
        motor_power(2,f);
        motor_power(1,99);
    }

    //turn to the moon base
    motor(1,f);
    motor(2,f);
    msleep(250);
    motor(1,f);
    motor(2,-f);
    msleep(605);
    ao();

    //hit moon base
    motor(1,f);
    motor(2,87);
    msleep(700);
    ao();
    //get to switch
    while (digital(0) == 0 || digital(1) == 0) {
        motor(1,f);
        motor(2,f);
    }

    //back up from switch
    motor(1,-f);
    motor(2,-f);
    msleep(500);
    ao();

    set_servo_position(0,1270);
    set_servo_position(1,1000);
    msleep(1000);

    motor(1,f);
    motor(2,f);
    msleep(200);
    ao();
    
    set_servo_position(0,600);
    msleep(1000);
    motor(1,100);
    motor(2,-100);
    msleep(1100);
    ao();
    set_servo_position(0,500);
    msleep(500);
    while (digital(0) == 0 && digital(1) == 0) {
        motor(1,f);
        motor(2,99);
    }
    motor(1,-f);
    motor(2,-f);
    msleep(1000);
    ao();
    motor(1,-50);
    motor(2,50);
    set_servo_position(1,100);
    msleep(425);
    ao();
    motor(1,f);
    motor(2,f);
    msleep(80);
    ao();
    set_servo_position(0,1600);
    msleep(1500);
    set_servo_position(1,1020);
    msleep(1000);
    set_servo_position(0,900);
    motor(1,-70);
    motor(2,70);
    msleep(1120);
    ao();

    disable_servos();
    return 0 ;
}
