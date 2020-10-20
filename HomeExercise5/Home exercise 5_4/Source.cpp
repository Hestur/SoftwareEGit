#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7

int main()
{
	int lottoArray1[SIZE];

	srand(time(0));

	for (size_t i = 0; i < SIZE; i++)
	{
		lottoArray1[i] = rand() % 36 + 1;

		if (i > 0)
		{
			for (size_t j = 0; j < i; j++)
			{
				if (lottoArray1[j] == lottoArray1[i])
				{
					i--;
					break;
				}
			}
		}
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		printf_s("%d ", lottoArray1[i]);
	}

	printf_s("\n\n");

	return 0;
}