#include "main.h"
#include "api.h"
#include "pid.h"
#include "robot.h"
using namespace pros;
void autons1 () {
//Red Side Left
/*StakeWing.set_value(false);
driveSlow(-700,80);
driveTurn(-32);
driveClampSlow(-450,20,20);
MogoMech.set_value(true);
delay(100);
//preload ring
driveTurn(120); 
driveStraight2(800);//second ring
justIntake(100);
driveTurn(15);
driveTurn(70);
driveStraight2(500);
driveTurn(-20);
driveStraight2(100);
driveTurn(-25);
driveStraight2(80);
driveStraight2(-700);
driveTurn(90);
Redirect.move(-127);
delay(300);
Redirect.move(0);
driveStraight2(465);*/


//Blue Right Side
/*StakeWing.set_value(false);
driveSlow(-700,80);
driveTurn(-32);
driveClampSlow(-450,20,20);
MogoMech.set_value(true);
delay(100);
//preload ring
Redirect.move(-127);
delay(400);
Redirect.move(0);
driveTurn(-75); 
driveStraight2(800);//second ring
justIntake(100);
driveTurn(-85);
driveStraight2(500);
driveTurn(20);
//driveStraight2(100);
driveTurn(25); 
driveStraight2(-700);
driveTurn(- 90);
Redirect.move(-127);
delay(400);
Redirect.move(0);
driveStraight2(465);*/

// Red Side Right safe
StakeWing.set_value(false);
driveSlow(1900,80);
driveTurn(-20);
StakeWing.set_value(false);
driveSlow(-1000,20);
/*riveTurn(45);
Redirect.move(-127);
delay(400);
Redirect.move(0);
driveClampSlow(-350,50, 20);
MogoMech.set_value(true);
justIntake(100);


// Blue Side Left safe
/*StakeWing.set_value(false);
driveSlow(-700,80);
driveTurn(32);
driveClampSlow(-450,20,20);
MogoMech.set_value(true);
driveTurn(-120); 
driveStraight2(800);
driveTurn(-15);
justIntake(100);
driveStraight2(100);*/

//Blue Side Left elims
/*driveStraight2(-1000);
driveTurn(115);*/
//driveStraight2(2000);

//Auton Skills
/*StakeWing.set_value(false);
justIntake(100); */


}