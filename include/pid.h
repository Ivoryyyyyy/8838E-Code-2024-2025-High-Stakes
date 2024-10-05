#include "api.h"
#include "main.h"
#include "robot.h"

//header guards
#ifndef PIDH
#define PIDH

#define STRAIT_KP 1.00// make it bigger untill it goes back and fourth and make sure that the error is less than 2-3 
#define STRAIT_KI 0.001// 0.001(breaks out of the loop)
#define STRAIT_KD 0// start at what kp is at then make it bigger

#define STRAIT_INTEGRAL_KI 40//
#define STRAIT_MAX_INTEGRAL 14.5//

extern void driveStraight(int target);
extern void driveStraight2(int target);
extern void driveTurn(int target);
extern void driveTurn2(int target);

#define TURN_KP 1.00// 
#define TURN_KI 0// 
#define TURN_KD 0// 

#define TURN_INTRGRAL_KI 30
#define TURN_MAX_INTEGRAL 25







#endif
