// Projekt		eksempler 1. semester
//
// Fil			eksempel 7_5.c
//
// Beskrivelse	den automatsik oprettede pointer til et array
//
// Forfatter	NVJ
//
// Version		1.0 - 150311 - oprindelig version

#include <stdio.h>

#define ARRAY_SIZE 5

int main()
{
	int arrayNavn[ ARRAY_SIZE ] = {3};

	printf_s( "%d\n", arrayNavn[0] );
	printf_s( "%x\n", &arrayNavn[0] );
	printf_s( "%d\n", *arrayNavn );
	printf_s( "%x\n", arrayNavn );

	return 0;
}

