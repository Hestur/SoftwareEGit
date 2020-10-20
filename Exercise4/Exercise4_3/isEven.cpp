#include "isEven.h"
#include "stdio.h"


int isEven(int number)

{
	if (number % 2) {
		printf_s("Tallet er ulige");
		number = 0;
	}
	else {
		printf_s("Tallet er lige");
		number = 1;
	}


	return number;
}