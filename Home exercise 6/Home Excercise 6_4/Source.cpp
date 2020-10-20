#include <stdio.h>

#define SIZE 7

int main()
{
	int lottoArray2[SIZE];
	int number, swap, end = 0;

	printf("Indtast 7 forskellige hele tal mellem 1 og 36\n");

	for (size_t i = 0; i < SIZE; i++)
	{
		do
		{
			printf_s("Tal %d: ", i + 1);
			scanf_s("%d", &number);

			if (number < 1 || 36 < number)
				printf_s("Tallet skal ligge mellem 1 og 36\n");
		} while (number < 1 || 36 < number);

		lottoArray2[i] = number;

		if (i > 0)
		{
			for (size_t j = 0; j < i; j++)
			{
				if (lottoArray2[j] == lottoArray2[i])
				{
					i--;
					printf_s("Tallet findes allerede\n");
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
			if (lottoArray2[index] > lottoArray2[index + 1])
			{
				swap = lottoArray2[index];
				lottoArray2[index] = lottoArray2[index + 1];
				lottoArray2[index + 1] = swap;
				end = 0;
			}
		}
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		printf_s("%d ", lottoArray2[i]);
	}

	printf_s("\n\n");

	return 0;
}