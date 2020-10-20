// Projekt		solutions 1. semester
//
// Fil			Exercise 5_2.c
//
// Beskrivelse	Løsning til exercise 5.2
//
// Forfatter	NVJ
//
// Version		1.0 - 010311 - oprindelig version

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

int main()
{
	int myArray[ARRAY_SIZE];
	int end = 0, swap;

	srand(time(0));

	for (size_t index = 0; index < ARRAY_SIZE; index++)
		myArray[index] = rand() % 10 + 1;

	printf_s("%s", "Data i oprindelig orden\n");

	for (size_t index = 0; index < ARRAY_SIZE; index++)
		printf_s("%4d", myArray[index]);

	for (unsigned int sorted = 1; sorted < ARRAY_SIZE && end == 0; sorted++)
	{
		end = 1;   // stop loop if array is sorted (no swapes are made)
		for (size_t index = 0; index < (ARRAY_SIZE - sorted); index++)
		{
			if (myArray[index] > myArray[index + 1])
			{
				swap = myArray[index];
				myArray[index] = myArray[index + 1];
				myArray[index + 1] = swap;
				end = 0;
			}
		}
	}

	printf_s("%s", "\n\nData i stigende orden\n");

	for (size_t index = 0; index < ARRAY_SIZE; index++)
		printf_s("%4d", myArray[index]);

	printf_s("%s", "\n\n");

	return 0;
}