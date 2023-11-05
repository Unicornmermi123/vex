#include "main.h"

//HELPER FUNCTIONS
void setCatapult(int power) {
    catapult = power;
}

//DRIVE CONTROL FUNCTIONS
void setCatapultMotor() {
    //bottom trigger outakes, top trigger intakes
    int catapultPower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2));  
    setCatapult(catapultPower); 
}
