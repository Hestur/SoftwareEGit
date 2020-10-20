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

	int led[7] = { 0 };
	char tast;
	int index;

	while (1)
	{
		tast = _getch();
		index = tast - '0';

		if (tast == '0')
			break;

		if (led[index] == 0)
		{
			ledOn(index);
			led[index] = 1;
		}
		else
		{
			ledOff(index);
			led[index] = 0;
		}
	}

	for (size_t i = 1; i <= 6; i++)
	{
		ledOff(i);
	}

	return 0;
}