/*Opg 5.2 Sortering
a. Lav et arr med 10 plader
b. fyld arr med random tal fra 1 til 100
c. Udskriv arr values på samme linje med mellemrum mellem hver value
d. Lav funktion som sortere arr (for loop)
e. Udskriv arr
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 99 // maximum size of array

int main(void) {
	int arr[SIZE];

	int temp = 0;

	size_t i;
	for (i = 0; i < SIZE; ++i) {
		arr[i] = 1 + rand() % 100;
	}

	//Sort the array in ascending order
	for (int i = 0; i < SIZE; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Elements of array sorted in ascending order: \n");
	for (i = 0; i < SIZE; ++i) {
		printf_s("%d\ ", arr[i]);
	} // end for
}