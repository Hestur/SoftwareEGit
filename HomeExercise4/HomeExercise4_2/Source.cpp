#include <stdio.h>
#include "Header.h"


void printRectangle(int side1, int side2)
{
	for (int counter2 = 0; counter2 < side2; counter2++)
	{
		for (int counter1 = 0; counter1 < side1; counter1++)
		{
			printf_s("%c", '*');
		}

		printf_s("\n");
	}

	printf_s("\n\n");

}