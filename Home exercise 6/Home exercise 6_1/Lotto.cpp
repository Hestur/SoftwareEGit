#include "lotto.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tipsLotto(int arrayAlias[], const int SIZE)
{
	int swap, end = 0;

	srand(time(0));

	for (size_t i = 0; i < SIZE; i++)
	{
		arrayAlias[i] = rand() % 36 + 1;

		if (i > 0)
		{
			for (size_t j = 0; j < i; j++)
			{
				if (arrayAlias[j] == arrayAlias[i])
				{
					i--;
					break;
				}
			}
		}
	}

	for (size_t sorted = 1; sorted < SIZE && end == 0; sorted++)
	{
		end = 1;   // stop loop if array is sorted (no swapes are made)

		for (size_t index = 0; index < (SIZE - sorted); index++)
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