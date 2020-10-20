// Projekt		eksempler 1. semester
//
// Fil			søgning-lineær.c
//
// Beskrivelse	eksempel på lineær søgning i et talarray
//
// Forfatter	NVJ
//
// Version		1.0 - 010311 - oprindelig version

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100


int main()
{
	int myArray[ ARRAY_SIZE ];
	int findNumber, numberIndex;
	int found = 0;

	srand( time(0) );

	for ( size_t index=0; index<ARRAY_SIZE; index++ )
		myArray[ index ] = rand()%100 +1;

	printf_s( "Hvilket tal vil du s\x9Bge efter (1-100): ");
	scanf_s( "%d", &findNumber );

	for ( size_t index=0; index<ARRAY_SIZE && found == 0; index++ )
	{
		if ( myArray[ index ] == findNumber )
		{ 
			found = 1;        
			numberIndex = index;
		}
	}

	if( found == 1 )
		printf_s( "\nTallet %d blev fundet p\x86 plads %d.\n\n", findNumber, numberIndex );
	else
		printf_s( "\nTallet %d blev IKKE fundet.\n\n", findNumber );

	for ( size_t index=0; index<ARRAY_SIZE; index++ )
	{
		printf_s( "%5d", myArray[ index ] );

		if( index%10 == 9 )
			printf_s( "\n" );
	}

	return 0;
}


