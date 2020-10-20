#include <stdio.h>
#include "sumBiggerThan100.h"


int main()
{
	double result;

	result = sumBiggerThan100(88.99, 22.88);	// funktionskald

	printf_s("\n%.2f\n\n", result);

	return 0;
}