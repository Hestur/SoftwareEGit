/*7.21 Find the error in each of the following program segments.
If the error can be corrected, explain how.*/
#include <stdio.h>

int main(void) {
	//a)
	int* number;
	printf("%d\n", *number);
	//Pointer peger ikke på noget

	//b)
	float* realPtr;
	long* integerPtr;
	integerPtr = realPtr;
	/*
	Her har pointerne to forskellige typer (float og long)
	og kan derfor ikke sættes ligmed hinanden
	*/

	//c)
	int* x, y;
	x = y;
	/*
		y er ikke en pointer (der mangler en * i første linje).
	*/

	//d)
	char s[] = "this is a character array";
	int count;
	for (; *s != '\0'; ++s)
		printf("%c ", *s);

	/*
		s er en ikke-flytbar pointer. ++s er derfor ikke tilladt.
	*/

	//e)
	short* numPtr, result;
	void* genericPtr = numPtr;
	result = *genericPtr + 7;

	/*
		Man kan ikke dereferere (”det som pointeren peger på”) når pointeren er generisk (void).
	*/

	//f)
	float x = 19.34;
	float xPtr = &x;
	printf("%f\n", xPtr);

	/*
		xPtr er ikke en pointer – der mangler * i første linje.
	Derefter mangler også * i anden linje – ellers får man adressen udskrevet.
	*/

	//g)
	char* s;
	printf("%s\n", s);

	/*
		s er ikke initialiseret (peger ikke på en tekststreng).
	*/
}