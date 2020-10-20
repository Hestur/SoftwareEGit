#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 20

int main()
{
	int myArray[ARRAY_SIZE];
	int countNegative = 0;

	srand(time(0));

	for (size_t index = 0; index < ARRAY_SIZE; index++)
		myArray[index] = rand() % 101 - 50;

	printf_s("%s", "Alle tal i arrayet:\n");

	for (size_t index = 0; index < ARRAY_SIZE; index++)
	{
		if (myArray[index] >= 0)
			printf_s(" ");
		printf_s("%d\n", myArray[index]);
	}

	for (size_t index = 0; index < ARRAY_SIZE; index++)
	{
		if (myArray[index] < 0)
			countNegative++;
	}

	printf_s("\nDer er %d negative tal i arrayet.\n\n", countNegative);

	return 0;
}