#include "main.h"


//HELPER FUNCTIONS
void setDrive(int left, int right) {
    driveLeftBack = left;
    driveLeftFront = left;
    driveRightBack = right;
    driveRightFront = right;    
}

void resetDriveEncoders() {
    driveLeftFront.tare_position();
    driveLeftBack.tare_position();
    driveRightFront.tare_position();
    driveRightBack.tare_position();
}

double avgDriveEncoderValue(){
    return (fabs(driveLeftFront.get_position()) +
           fabs(driveLeftBack.get_position()) +
           fabs(driveRightFront.get_position()) +
           fabs(driveRightBack.get_position())) / 4;

}

//DRIVER CONTROL FUNCTIONS
void setDriveMotors() {
    int leftjoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int rightjoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);
    if(abs(leftjoystick) < 10) 
        leftjoystick = 0;
    if(abs(rightjoystick) < 10) 
        rightjoystick = 0;
    setDrive(leftjoystick, rightjoystick);
}


//AUTONOMOUS FUNCTIONS
void translate(int units, int voltage);
    //reset motor encoders

    //drive forward intul units are reached
    //brief brake
    //set drive to neutral


