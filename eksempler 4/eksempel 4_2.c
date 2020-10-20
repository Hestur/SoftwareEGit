#include <stdio.h>
#include <math.h>


int main()
{
	double result;
	
	for( unsigned int counter=0; counter<10; counter++ )
	{
		result = sqrt( counter );
		printf_s( "\n%.3f", result );
	}

	printf_s("\n\n");

	return 0;
};