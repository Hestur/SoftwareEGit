// Projekt		eksempler 1. semester
//
// Fil			array udskrift.c
//
// Beskrivelse	Hvordan kan indholdet i et array udskrives
//
// Forfatter	NVJ
//
// Version		1.0 - 010311 - oprindelig version

#include <stdio.h>

#define ARRAY_SIZE 10


int main()
{
	double myArray[ARRAY_SIZE] = { 35.2, -5.99, 11.76, 67.345, 2.0 };

	for( size_t index=0; index<ARRAY_SIZE; index++ )		// vandret udskrift
		printf_s( "%8.3f", myArray[ index ] );

	printf_s( "\n\n" );

	for( size_t index=0; index<ARRAY_SIZE; index++ )		// lodret udskrift
		printf_s( "%8.3f\n", myArray[ index ] );

	printf_s( "\n" );

	return 0;
}

