#pragma once

#include <esphome.h>

enum eStepperModes
{
	STEPPER_MODE_OFF = 0,
	STEPPER_MODE_READY = 1,
	STEPPER_MODE_HOMING = 2,
	STEPPER_MODE_RANGEESTIMATION = 3,
	STEPPER_MODE_DRIVE = 10,
	STEPPER_MODE_MANUAL = 11
};

enum eAutomationModes
{
	AUTOMATION_MODE_OFF = 0,
	AUTOMATION_MODE_NEXT_PLANT_POSITION = 1
};