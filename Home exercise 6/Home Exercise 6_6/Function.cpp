#include "Header.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tipsLotto(int arrayAlias[], const int size)
{
	int swap, end = 0;

	srand(time(0));

	for (int i = 0; i < size; i++)
	{
		arrayAlias[i] = rand() % 36 + 1;

		if (i > 0)
		{
			for (int j = 0; j < i; j++)
			{
				if (arrayAlias[j] == arrayAlias[i])
				{
					i--;
					break;
				}
			}
		}
	}

	for (int sorted = 1; sorted < size && end == 0; sorted++)
	{
		end = 1;   // stop loop if array is sorted (no swapes are made)

		for (int index = 0; index < (size - sorted); index++)
		{
			if (arrayAlias[index] > arrayAlias[index + 1])
			{
				swap = arrayAlias[index];
				arrayAlias[index] = arrayAlias[index + 1];
				arrayAlias[index + 1] = swap;
				end = 0;
			}
		}
	}
}

void brugerLotto(int arrayAlias[], const int size)
{
	int number, swap, end = 0;

	printf("Indtast 7 forskellige hele tal mellem 1 og 36\n");

	for (int i = 0; i < size; i++)
	{
		do
		{
			printf("Tal %d: ", i + 1);
			scanf_s("%d", &number);

			if (number < 1 || 36 < number)
				printf("Tallet skal ligge mellem 1 og 36\n");
		} while (number < 1 || 36 < number);

		arrayAlias[i] = number;

		if (i > 0)
		{
			for (int j = 0; j < i; j++)
			{
				if (arrayAlias[j] == arrayAlias[i])
				{
					i--;
					printf("Tallet findes allerede\n");
					break;
				}
			}
		}
	}

	for (int sorted = 1; sorted < size && end == 0; sorted++)
	{
		end = 1;   // stop loop if array is sorted (no swapes are made)

		for (int index = 0; index < (size - sorted); index++)
		{
			if (arrayAlias[index] > arrayAlias[index + 1])
			{
				swap = arrayAlias[index];
				arrayAlias[index] = arrayAlias[index + 1];
				arrayAlias[index + 1] = swap;
				end = 0;
			}
		}
	}
}