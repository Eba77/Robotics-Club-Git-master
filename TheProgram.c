#pragma config(Motor,  port2,           plzwrk,        tmotorServoContinuousRotation, openLoop)
#include "JoystickDriver.c"
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
//Test
task main()
{
int Ch1;
	while(0 == 0){
	getJoystickSettings(joystick);

	if (vexRT[Ch1]<0) {//move forward
		if (!joy1Btn(6)) {//right shoulder button not pressed, don't disable left wheels
			motor[port2] = -100;
	  } else { motor[port2] = 0;}
	  if (!joy1Btn(5)) {//left shoulder button not pressed, don't disable right wheels
		  motor[port3] = -100;
	  } else { motor[port3] = 0;}
	}
	if (vexRT[Ch1]>0) {//move back
		if (!joy1Btn(6)) {//right shoulder button not pressed, don't disable left wheels
			motor[port2] = 100;
	  } else { motor[port2] = 0;}
	  if (!joy1Btn(5)) {//left shoulder button not pressed, don't disable right wheels
		  motor[port3] = 100;
	  } else { motor[port3] = 0;}
	}
	if (vexRT[Ch1]==0) {//don't move
		motor[port2] = 0;
		motor[port3] = 0;
	}


		//motor[port2] = -vexRT[Ch1]/2;
		//motor[port3] = -vexRT[Ch1]/2;
		//motor[port4] = -vexRT[Ch3]/2;


	//motor[plzwrk] = 100;
	//writeDebugStreamLine("Int i is    : %d", motor[plzwrk]);

	}//while loop is over
}

//Ch 2 is right joystick horizontal
//Ch 1 is right joystick vertical
//Ch 5 is left shoulder buttons (?)
//Ch 6 is right shoulder buttons (?)
