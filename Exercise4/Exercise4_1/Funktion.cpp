#include "sumBiggerThan100.h"
#include <stdio.h>

int sumBiggerThan100(double tal1, double tal2)	// implementering
{
	int sum;
	sum = tal1 + tal2;
	
	if (sum <= 100) {
		sum = 0;
		printf_s("Sum = mindre eller lig 100");
	}
	if (sum > 100) {
		sum = 1;
		printf_s("\nSum er over 100");
	}

	return sum;
}