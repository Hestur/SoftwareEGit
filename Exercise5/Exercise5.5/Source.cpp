#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

#include <conio.h>
#include <time.h>

int main()
{
	if (!Open())
	{
		printf_s("Error with connection\n");
		exit(1);
	}

	printf_s("Connected to Raspberry Pi\n");

	srand(time(0));

	int eyes = 1;
	char tast;

	do
	{
		while (keyPressed(P1) == false)
		{
			ledOff(eyes);
			Wait(100);
			eyes = rand() % 6 + 1;
			ledOn(eyes);
			Wait(100);
		}

		tast = _getch();
	} while (tast != 'q' && tast != 'Q');

	ledOff(eyes);

	return 0;
}