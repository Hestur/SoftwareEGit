#include <stdio.h>
#include <conio.h>


int main()
{
	char character;

	for (unsigned int counter = 0; counter < 5; counter++)
	{
		character = _getch();				// venter p� indtastning
		printf_s( "\n%c", character );
	}

	printf_s( "\n%d", _kbhit() );

	while (!_kbhit());						// venter p� indtastning
	
	printf_s( "\n%d", kbhit() );

	_getch();								// burde vente p� indtastning men seneste
											// tastetryk st�r i buffer og indl�ses nu
	printf_s( "\n%d\n\n", _kbhit() );

	_getch();								// venter p� indtastning

	return 0;
}