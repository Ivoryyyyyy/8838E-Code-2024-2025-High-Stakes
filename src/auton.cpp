#include "main.h"
#include "api.h"
#include "pid.h"
#include "robot.h"

void autons1 () {
//Red Side Left
/*driveSlow(-700,80);
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
driveStraight2(100);
driveTurn(-30);
driveStraight2(70);
driveStraight2(-700);
driveTurn(90);
driveStraight2(450);*/

//Blue Right Side
/*StakeWing.set_value(false);
driveSlow(-750,80);
driveTurn(30);
driveClampSlow(-500,20,25);
MogoMech.set_value(true);
StakeWing.set_value(false);
driveTurn(-125); 
driveStraight2(800);
driveTurn(-15);
justIntake(100);
driveTurn(-70);
driveStraight2(500);
driveTurn(20);
driveStraight2(100);
driveTurn(30);
driveStraight2(70);
driveStraight2(50);
driveStraight2(-700);
driveTurn(-90);
driveStraight2(400);
driveStraight2(400);*/

// Red Side Right safe
/*driveSlow(-700,80);
driveTurn(-32);
driveClampSlow(-450,20,20);
MogoMech.set_value(true);
driveTurn(120); 
driveStraight2(800);
driveTurn(15);
justIntake(100);*/

// Blue Side Left safe
/*driveSlow(-700,80);
driveTurn(32);
driveClampSlow(-450,20,20);
MogoMech.set_value(true);
driveTurn(-120); 
driveStraight2(800);
driveTurn(-15);
justIntake(100);
driveStraight2(100);*/

//Blue Side Left elims
driveStraight2(-1000);
driveTurn(115);
//driveStraight2(2000);


}