#include "main.h"

//HELPER FUNCTIONS
void setIntake(int power) {
    intakeA = power;
    intakeB = power;
}

//DRIVE CONTROL FUNCTIONS
void setIntakeMotors() {
    //bottom trigger outakes, top trigger intakes
    int intakePower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2));  
    setIntake(intakePower); 
}
