// Projekt		eksempler 1. semester
//
// Fil			eksempel 7_6.c
//
// Beskrivelse	funktion med array parameter
//
// Forfatter	NVJ
//
// Version		1.0 - 150311 - oprindelig version

#include <stdio.h>

#define ARRAY_SIZE 10

void funktion( int [], const int );


int main()
{
	int talArray[ ARRAY_SIZE ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for( size_t index=0; index<ARRAY_SIZE; index++ )
		printf_s( "%d ", talArray[index] );

	printf_s( "\n\n" );

	funktion( talArray, ARRAY_SIZE );

	for( size_t index=0; index<ARRAY_SIZE; index++ )
		printf_s( "%d ", talArray[index] );
	
	printf_s( "\n\n" );

	return 0;
}


void funktion( int Array[], const int SIZE )
{
	for( size_t localIndex=0; localIndex<SIZE; localIndex++ )
		Array[localIndex] *= 2;
}