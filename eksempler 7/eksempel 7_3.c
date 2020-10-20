// Projekt		Eksempler 1. semester
//
// Fil			eksempel 7_3.c
//
// Beskrivelse	forskellen på call-by-value og call-by-reference
//
// Forfatter	NVJ
//
// Version		1.0 - 150311 - oprindelig version

#include <stdio.h>


int squareByValue( int );
void squareByReference( int * );


int main()
{
	int x = 2, z = 4;

	printf_s( "x = %d inden kald af squareByValue( )\n", x );
	printf_s( "Retur fra squareByValue( ): %d\n", squareByValue( x ) );
	printf_s( "x = %d efter kald af squareByValue( )\n", x );

	printf_s( "\nz = %d inden kald af squareByReference( )\n", z );

	squareByReference( &z );

	printf_s( "\nz = %d efter kald af squareByReference( )\n\n", z );

	return 0;
}


int squareByValue( int a )
{
   return a *= a;						// værdien af den oprindelige variabel
   										// i main() bliver IKKE ændret.
}


void squareByReference( int *cRef )
{
   (*cRef) *= (*cRef);					// værdien af den oprindelige variabel
   										// i main() BLIVER ændret.
}