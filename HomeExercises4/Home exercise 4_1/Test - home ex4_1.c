#include <stdio.h>
#include <conio.h>
#include "funktions - home ex4_1.h"


int main()
{
	printf_s("%d\n", getInteger(54.973));
	printf_s("%f\n", getDecimal(54.973));
	printf_s("%d\n", getInteger(-4.06));
	printf_s("%f\n", getDecimal(-4.06));

	return 0;
}