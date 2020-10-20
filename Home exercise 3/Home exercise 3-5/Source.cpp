/*3.32 (Square of Asterisks) Write a program that reads in the side of a square and then prints that
square out of asterisks. Your program should work for squares of all side sizes between 1 and 20. For
example, if your program reads a size of 4, it should print
****
****
****
****      */

#include <stdio.h>
#include <math.h>


int main(void)
{
	int sideLenght = 0, counter1 = 0, counter2 = 0;

	while (sideLenght < 1 || 20 < sideLenght)
	{
		printf_s("%s", "Indtast et positivt tal mellem 1 og 20: ");
		scanf_s("%d", &sideLenght);

		if (sideLenght < 1 || 20 < sideLenght)
			printf_s("%s", "\nDu indtastede et ugyldigt tal. Tallet skal v\x91re mellem 1 og 20. Pr\x9Bv igen.\n\n");
	}

	for (int counter2 = 0; counter2 < sideLenght; counter2++)
	{
		printf_s("%s", "\n");

		for (int counter1 = 0; counter1 < sideLenght; counter1++)
		{
			printf_s("%s", "*");
		}
	}

	printf_s("%s", "\n\n");

	return 0;
}