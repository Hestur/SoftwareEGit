#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspwdwqdwdwqberry Pi\n");

	ledOn(1);
	ledOn(2);
	ledOn(3);
	ledOn(4);
	ledOn(5);
	ledOn(6);
	Wait(2000);
	ledOff(1);

	return 0;
}