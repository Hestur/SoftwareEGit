// Projekt		Eksempler 1. semester
//
// Fil			eksempel 7_1.c
//
// Beskrivelse	udskrift af værdier og adresser
//
// Forfatter	NVJ
//
// Version		1.0 - 150311 - oprindelig version

#include <stdio.h>


int main()
{
	int number = 7;
	int myArray[ 5 ] = { 1, 2, 3, 4, 5 };
	
	printf_s( "%d\n", number );

	printf_s( "%x\n", &number );

	printf_s( "%d\n", myArray[0] );

	printf_s( "%x\n", &myArray[0] );

	printf_s( "%x\n", myArray );

	return 0;
}
