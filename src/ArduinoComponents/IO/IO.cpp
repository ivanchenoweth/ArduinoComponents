#include "IO.h"
#include "Arduino.h"

unsigned long millisTime() {
	return millis();
}

void millisDelay(unsigned millis) {
	delay(millis);
}