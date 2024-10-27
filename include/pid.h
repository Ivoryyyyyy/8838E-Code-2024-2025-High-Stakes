#include "api.h"
#include "main.h"
#include "robot.h"

//header guards
#ifndef PIDH
#define PIDH

#define STRAIT_KP 2.00// make it bigger untill it goes back and fourth and make sure that the error is less than 2-3 
#define STRAIT_KI 0.001// 0.001(breaks out of the loop)
#define STRAIT_KD 7// start at what kp is at then make it bigger

#define STRAIT_INTEGRAL_KI 40//
#define STRAIT_MAX_INTEGRAL 14.5//

extern void driveStraight(int target);
extern void driveStraight2(int target);
extern void driveTurn(int target);
extern void driveTurn2(int target);
extern void driveSlow(int target, int speed);
extern double calPID(double target, double input, int integralKi, int maxIntergral);
extern void driveIntake(int target, int start, int stop);
extern void driveClamp (int target, int clampDistance);

#define TURN_KP 5.00//
#define TURN_KI 0// 
#define TURN_KD 60// 

#define TURN_INTRGRAL_KI 30
#define TURN_MAX_INTEGRAL 25

#define LIFT_KP 1.5// 
#define LIFT_KI 0// 
#define LIFT_KD 0// 





#endif
