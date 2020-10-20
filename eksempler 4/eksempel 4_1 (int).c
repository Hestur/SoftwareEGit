#include <stdio.h>
#include <conio.h>


int main()
{
	int character;

	for (unsigned int counter = 0; counter < 5; counter++)
	{
		character = _getch();				// venter på indtastning
		printf_s( "\n%d", character );
	}

	printf_s( "\n%d", kbhit() );

	while (!_kbhit());						// venter på indtastning
	
	printf_s( "\n%d", _kbhit() );

	_getch();								// burde vente på indtastning men seneste
											// tastetryk står i buffer og indlæses nu
	printf_s( "\n%d\n\n", _kbhit() );

	_getch();								// venter på indtastning

	return 0;
}