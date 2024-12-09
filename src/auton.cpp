#include "main.h"
#include "api.h"
#include "pid.h"
#include "robot.h"
using namespace pros;
void autons1 () {
//Red side right 4 ring
//hi
/*driveStraight(1600);
driveTurn(15);
driveStraight2(250);
StakeWing.set_value(true);
driveSlow(-1000,20);*/
//Red Side Left
/*StakeWing.set_value(false);
driveSlow(-700,80);
driveTurn(-32);
driveClampSlow(-450,20,20);
MogoMech.set_value(true);
delay(100);
//preload ring
driveTurn(120); 
justIntake(100);
driveStraight2(800);//second ring
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

//Blue Side goal side, left rush (elims, nor priority win point, 2 stakes)
/*driveStraight(-1550);
driveTurn(-35);
driveClampSlow(-450,-40,20);
bool MogoMechToggle = true; //mogo rush
justIntake(100);//preload
driveStraight(200);
driveTurn(-115);
driveTurn(-15);
driveStraight2(-700);
MogoMechToggle = false; //drop 1st moible goal
delay(100);
driveTurn(-100);
driveStraight2(-700);
driveTurn(-45);
driveClampSlow(-300,280,30);
MogoMechToggle = true; // secomd moible goal
driveTurn(24);
driveStraight2(300);*/

//Red Side goal side, right rush
driveStraight(-1550);
driveTurn(35);
driveClampSlow(-450,-40,20);
bool MogoMechToggle = true; //mogo rush
justIntake(100);//preload
driveStraight(200);
driveTurn(115);
driveTurn(15);
driveStraight2(-700);
MogoMechToggle = false; //drop 1st moible goal
delay(100);
driveTurn(100);
driveStraight2(-700);
driveTurn(45);
driveClampSlow(-300,280,30);
MogoMechToggle = true; // secomd moible goal
driveTurn(-24);
driveStraight2(300);


//Blue Right Side 4 ring
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
justIntake(100);
driveStraight2(800);//second ring
driveTurn(-85);
driveStraight2(500);
driveTurn(20);
//driveStraight2(100);
driveTurn(25); 
driveStraight2(-700);
driveTurn(- 90);
Redirect.move(-127);
delay(1400);
driveStraight2(500);
Redirect.move(0);
driveTurn(-5);*/

// Red Side Right safe
/*StakeWing.set_value(false);
driveSlow(1900,80);
driveTurn(-20);
StakeWing.set_value(false);
driveSlow(-1000,20);*/
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