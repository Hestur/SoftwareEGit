#include "Header.h"

int calculateSeconds(int hours, int minutes, int seconds)
{
	int totalSeconds = ((hours * 60) + minutes) * 60 + seconds;
	return totalSeconds;
}