// Projekt		eksempler 1. semester
//
// Fil			terningkast.c
//
// Beskrivelse	Eksempel på anvendelse af array
//
// Forfatter	NVJ
//
// Version		1.0 - 010311 - oprindelig version

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 7


int main()
{
	int frequency[ ARRAY_SIZE ] = {0};
	int	throws;

	srand(time(0));

	printf_s( "Hvor mange gange skal terningen kastes? : " );
	scanf_s( "%d", &throws );

	for ( size_t counter=1; counter<=throws; counter++ )
		++frequency[ rand()%6 + 1];

	printf_s( "\n\x9Bjne\tfrekvens\n" );

	for( size_t index=1; index<ARRAY_SIZE; index++ )
		 printf_s( "%3d%10d\n", index, frequency[index] );
}