// Projekt		eksempler 1. semester
//
// Fil			out-of-range.c
//
// Beskrivelse	eksempel på fejl i array-indeks
//
// Forfatter	NVJ
//
// Version		1.0 - 010311 - oprindelig version

#include <stdio.h>

#define ARRAY_SIZE 4


void printArray(char arrayName, int myArray[], const int SIZE);


int main()
{
   int a[ARRAY_SIZE] = {0, 1, 2, 3},
       b[ARRAY_SIZE] = {4, 5, 6, 7},
       c[ARRAY_SIZE] = {8, 9, 10, 11};

   printArray( 'a', a, ARRAY_SIZE );
   printArray( 'b', b, ARRAY_SIZE );
   printArray( 'c', c, ARRAY_SIZE );

   b[-3] = -999;
   b[6] = 999;

   printf_s( "\n" );

   printArray( 'a', a, ARRAY_SIZE );
   printArray( 'b', b, ARRAY_SIZE );
   printArray( 'c', c, ARRAY_SIZE );

   printf_s( "\n\n" );

   return 0;
}


void printArray( char arrayName, int myArray[], const int SIZE )
{
   printf_s( "\n%c  =", arrayName );

   for ( size_t index = 0; index < SIZE; index++ )
      printf_s( "%5d", myArray[ index ] );

   printf_s( "\n" );
}
