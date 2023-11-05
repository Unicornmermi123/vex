#include "main.h"

//HELPER FUNCTIONS
void setClimb(int power) {
    climbA = power;
    climbB = power;
}

//DRIVE CONTROL FUNCTIONS
void setClimbMotors() {
    int climbPower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_X) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_B));  
    setClimb(climbPower); 
}
