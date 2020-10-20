// Projekt		Eksempler 1. semester
//
// Fil			eksempel 4_10.c
//
// Beskrivelse	eksempel på funktion der hverken modtager eller returneret noget.
//
// Forfatter	NVJ
//
// Version		1.0 - 230211 - oprindelig version

#include <stdio.h>


void udskrivMenu( void );						//FUNKTIONS - PROTOTYPE


void main()
{
	/*
	
		her kan stå noget kode
	
	*/

	udskrivMenu( );								//FUNKTIONS - KALD

	/*
	
		her kan stå noget kode
	
	*/
}


void udskrivMenu( void )						//FUNKTIONS - HEADER
{
	system("cls");
	printf_s( "*** HOVEDMENU ***\n\n" );
	printf_s( "1. Start nyt spil.\n" );
	printf_s( "2. Hent gemt spil.\n" );
	printf_s( "3. Gem spil.\n" );
	printf_s( "4. Afslut.\n\n" );
}