#include "main.h"
#include "api.h"
#include "pid.h"
#include "robot.h"

void autons1 () {
//Right Side Right
driveStraight2(-750);
driveTurn(-32);
driveStraight2(-400);
driveClamp(-400,-600);
MogoMech.set_value(true);
/*driveTurn(45);
driveTurn(45);
driveIntake(200,137,200);
driveStraight2(0); 
driveTurn2(110); 
driveStraight2(600);
driveTurn2(90);
driveStraight2(600);
driveTurn2(30);
driveTurn2(110);
driveStraight2(600);
driveTurn2(90);
driveStraight2(200);*/

// Red Side Left

// Blue Side Right
//Driveclamp(800,1000)
/*driveStraight2(-1000);
driveTurn2(-110);
driveStraight2(600);
Intake.move(90);
Intake2.move(90);
Intake_Layer1.move(120);
driveTurn2(-90);
driveStraight2(600);
Intake.move(127);
Intake2.move(127);
Intake_Layer1.move(127);
driveTurn2(-30);
driveStraight2(100);
Intake.move(127);
Intake2.move(127);
Intake_Layer1.move(127);
driveTurn2(-110);
driveStraight2(600);
driveTurn2(-90);
driveStraight2(200);*/

//Blue Side Left 

}