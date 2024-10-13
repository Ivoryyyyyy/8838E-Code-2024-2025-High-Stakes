#include "main.h"



//header Guards, safety
#ifndef ROBOTH
#define ROBOTH

extern pros::Motor LF;
extern pros::Motor LM;
extern pros::Motor LB;
extern pros::Motor RF;
extern pros::Motor RM;
extern pros::Motor RB;

extern pros::Motor Intake;
extern pros::Motor Intake2;
extern pros::Motor Intake_Layer1;

extern pros::Imu imu;

extern pros::Controller con;

extern pros::ADIDigitalOut MogoMech;
extern pros::ADIDigitalOut StakeWing;
extern pros::ADIDigitalOut Redirect;

#endif
//hello