#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	ledOn(6);
	Wait(5000);
	ledOn(5);
	ledOff(6);
	Wait(1500);
	ledOff(5);
	ledOn(4);
	Wait(7000);
	ledOff(4);
	ledOn(6);
	Wait(2000);
	ledOff(6);





	return 0;
}