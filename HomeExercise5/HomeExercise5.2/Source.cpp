/* HomeExercise5.2
1. Opret et arr med hele tal med 500 pladser
2. Læg tallene fra 1-500 ind i arr, via den bedste måde (opg 5.1)
3. Udskriv arr
*/
#include <stdio.h>
#define SIZE 500 // maximum size of array

int main() {
	int arr500[SIZE];

	size_t i;
	for (i = 0; i < SIZE; i++) {
		arr500[i] = i + 1;
	}

	for (i = 0; i < SIZE; i++) {
		printf_s("%d\n", i, arr500[i]);
	} // end for
}