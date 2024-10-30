#include "main.h"
#include "api.h"
#include "pid.h"
#include "robot.h"

void autons1 () {
//Red Side Left
driveSlow(-700,80);
driveTurn(-32);
driveClampSlow(-450,20,20);
MogoMech.set_value(true);
driveTurn(120); 
driveStraight2(800);
driveTurn(15);
justIntake(100);
driveTurn(70);
driveStraight2(500);
driveTurn(-20);
driveStraight2(150);
driveTurn(-s30);
driveStraight2(100);




//MogoMech.set_value(true);
//driveTurn(45);
//driveIntake(500)
/*driveTurn2(110); 
driveIntakeSlow(800,600,800,80);
driveStraight2(-200);
driveTurn2(20);
driveIntakeSlow(200,200,200,80);
driveStraight2(-600);
driveTurn2(-90);
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