/* HomeExercise5.3
1. Opret et array til hele tal med 7 pladser
2. L�g 7 tilf�ldige tal mellem 1 og 36 ind i arrayet
3. Udskriv arr p� en linje med space mellem hver value
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 7 // maximum size of array


int main() {


	int arr[SIZE];

	size_t i;
	for (i = 0; i < SIZE; ++i) {
		arr[i] = 1 + rand() % 36;
	}


	for (i = 0; i < SIZE; ++i) {
		printf_s("%d\ ", arr[i]);
	} // end for




}