// Projekt		eksempler 1. semester
//
// Fil			eksempel 7_8.c
//
// Beskrivelse	en pointer kan "flyttes" (tælles op)
//
// Forfatter	NVJ
//
// Version		1.0 - 150311 - oprindelig version

#include <stdio.h>

#define ARRAY_SIZE 10

void printArray( const int *, const int );


int main()
{
	int talArray[ ARRAY_SIZE ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printArray( talArray, ARRAY_SIZE );
	
	printf_s( "\n\n" );

	return 0;
}


void printArray( const int *arrayPtr, const int SIZE )
{
	for( size_t localIndex=0; localIndex<SIZE; localIndex++ )
	{
		printf_s( "%d ", *arrayPtr );
		arrayPtr++;
	}
}