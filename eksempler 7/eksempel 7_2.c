// Projekt		Eksempler 1. semester
//
// Fil			eksempel 7_2.c
//
// Beskrivelse	de to betydninger af * i fbm. en pointer
//
// Forfatter	NVJ
//
// Version		1.0 - 150311 - oprindelig version

#include <stdio.h>


int main()
{
	char myChar = 'a';
	char *myCharPtr = &myChar;

	printf_s( "%c\n", myChar );

	printf_s( "%x\n", &myChar );

	printf_s( "%x\n", myCharPtr );

	printf_s( "%c\n", *myCharPtr );

	return 0;
}
