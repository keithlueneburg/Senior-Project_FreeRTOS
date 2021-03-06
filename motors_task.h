/*
 * motors.h
 *
 *  Created on: Feb 21, 2015
 *      Author: Team Goose
 */


#ifndef MOTORS_TASK_H_
#define MOTORS_TASK_H_


// Setup PWM
void ConfigurePWM();

// Setup additional GPIO pins for motors
void ConfigureMotorGPIO();

// Setupt GPIO pins for monitoring motor speed
void ConfigureMotorSpeedSensorGPIO();

// Detect Left Motor Rotations (speed)
uint32_t CalculateLeftSpeed();

// Detect Right Motor Rotations (speed)
uint32_t CalculateRightSpeed();
// More accurate left rotation (speed)
uint32_t returnLeftSpeed();
// More accurate right rotation (speed)
uint32_t returnRightSpeed();


// Set motor speeds
void setMotorSpeed(int32_t leftSpeed, int32_t rightSpeed);

// Setup grabber arm GPIO
/*void ConfigureGrabberArmGPIO();

//Open grabber arm
void OpenGrabberArm();

//Close grabber arm
void CloseGrabberArm();*/

#endif /* MOTORS_TASK_H_ */
