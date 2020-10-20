#include <stdio.h>
#include <math.h>


int main(void)
{
	double number;

	do
	{
		printf_s("%s", "Indtast et positivt tal: ");
		scanf_s("%lf", &number);

		if (number < 0)
			printf_s("%s", "\nDu indtastede et ugyldigt tal. Tallet skal v\x91re positivt. Pr\x9Bv igen.\n\n");

	} while (number < 0);

	printf_s("\nKvadratroden af %f er %f\n\n", number, sqrt(number));

	return 0;
}