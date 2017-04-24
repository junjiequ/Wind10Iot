#include "LedController.h"

namespace ArduinoWiringLib
{
	LedController::LedController()
	{
		setup();
	}

	void LedController::LEDOn()
	{
		ledOn();
	}

	void LedController::LEDOff()
	{
		ledOff();
	}
}
