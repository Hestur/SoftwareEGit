#include <stdio.h>
#include "funktion.h"


int main()
{
	double result;
	
	result = degreeToRadian( 134.56 );	// funktionskald

	printf_s( "\n%.2f\n\n", result );

	return 0;
}