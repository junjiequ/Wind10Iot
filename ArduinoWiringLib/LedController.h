#pragma once

void setup();
void ledOn();
void ledOff();

namespace ArduinoWiringLib
{
	public ref class LedController sealed
	{
	public:
		LedController();
		void LEDOn();
		void LEDOff();
	};
}

