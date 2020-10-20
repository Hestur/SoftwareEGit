#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

#include <conio.h>

int main()
{
	if (!Open())
	{
		printf_s("Error with connection\n");
		exit(1);
	}

	printf_s("Connected to Raspberry Pi\n");

	for (size_t i = 1; i <= 6; i++)
	{
		ledOn(i);
	}

	Wait(5000);

	for (size_t i = 1; i <= 6; i++)
	{
		ledOff(i);
	}

	return 0;
}