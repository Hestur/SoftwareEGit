/*Skriv et lille program(main) hvor i du gør følgende :
1. Opret et array til hele tal med 7 pladser.
2. Brugeren skal så indtaste 7 hele tal mellem 1 og 36. Disse tal skal lægges ind i arrayet.
3. Herefter skal arrayet sorteres.
4. Udskriv derefter tallene fra arrayet på én linje med mellemrum mellem hvert tal.*/

#include <stdio.h>

#define SIZE 7

int main()
{
	int lottoArray2[SIZE];
	int number, swap, end = 0;

	printf_s("Indtast 7 hele tal mellem 1 og 36\n");

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