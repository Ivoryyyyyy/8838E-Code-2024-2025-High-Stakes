
#include "main.h"
#include "api.h"
#include "pid.h"
#include "robot.h"
#include "auton.h"


using namespace pros;
using namespace std;

void on_center_button() {
	static bool pressed = false;
	pressed = !pressed;
	if (pressed) {
		pros::lcd::set_text(2, "I was pressed!");
	} else {
		pros::lcd::clear_line(2);
	}
}

void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(1, "Hello PROS User!");

	pros::lcd::register_btn1_cb(on_center_button);
}
void disabled() {}

void autonomous() {
	autons1();
}
void competition_initialize() {}


void opcontrol() {

bool MogoMechToggle = false;
bool arcToggle = true;
bool tankToggle=false;
bool StakeWingToggle=false;
double liftAngle=true;
int time=0;


while (true) {

//Mogo Mech
if(con.get_digital_new_press(E_CONTROLLER_DIGITAL_X)){
	MogoMechToggle = !MogoMechToggle;
}
MogoMech.set_value(MogoMechToggle);

//Stakewing toggle
if (con.get_digital_new_press(E_CONTROLLER_DIGITAL_Y)) {
            StakeWingToggle = !StakeWingToggle;
 }
 StakeWing.set_value(StakeWingToggle);

 //Redirect
if (con.get_digital(E_CONTROLLER_DIGITAL_L1)){
	Redirect.move(90);
	liftAngle = Redirect.get_position();	
}
else if (con.get_digital(E_CONTROLLER_DIGITAL_L2)){
	Redirect.move(-90);
	liftAngle = Redirect.get_position();
}
else {
	setConstants(LIFT_KP,LIFT_KI,LIFT_KD);
	Redirect.move(calPID(liftAngle,Redirect.get_position(),0,0));
}
 //yapp 
//pid tester
if(con.get_digital_new_press(E_CONTROLLER_DIGITAL_A)){
	driveArcL(90, 800, 1000);
	//autonomous(); 
	//driveSlow(1000,80);
	//make sure that this works for small and big numbers 
	//driveTurn(180);
}
//Intake
if (con.get_digital(E_CONTROLLER_DIGITAL_R1)){
	Intake.move(90);
	Intake_Layer1.move(90);
}
else if (con.get_digital(E_CONTROLLER_DIGITAL_R2)){
	Intake.move (-90);
	Intake_Layer1.move(-90);
}
else {
	Intake.move(0);
	Intake_Layer1.move(0);
}
//chassis drive 
int power = con.get_analog(ANALOG_LEFT_Y);
int RX = con.get_analog(ANALOG_RIGHT_X);
int turn = int(pow(RX, 3)/ 16129);
int left= power + turn; 
int right = power - turn;

if(con.get_digital_new_press(E_CONTROLLER_DIGITAL_B)){
	arcToggle = !arcToggle;
	tankToggle = !tankToggle;
}

if (tankToggle){
	LF.move(con.get_analog(ANALOG_LEFT_Y));
	LM.move(con.get_analog(ANALOG_LEFT_Y));
	LB.move(con.get_analog(ANALOG_LEFT_Y));
	RF.move(con.get_analog(ANALOG_RIGHT_Y));
	RM.move(con.get_analog(ANALOG_RIGHT_Y));
	RB.move(con.get_analog(ANALOG_RIGHT_Y));
}

if (arcToggle) {
LF.move(left);
LM.move(left);
LB.move(left);
RF.move(right);
RM.move(right);
RB.move(right);
}

if (time % 50 == 0 && time % 100 !=0 && time % 150 !=0){
    con.print(0,0,"Time:%f       ", float(viewTime));
} else if (time% 100 == 0 && time % 150 !=0){
    con.print(1,0,"HeadingError!%f          ", float(imu.get_heading()));
} else if (time % 150 == 0){
    con.print(2,0,"Error:%f      ",float(error));
}




delay(10);
time += 10;

}

}

