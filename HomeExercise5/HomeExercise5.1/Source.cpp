/*
1: Opret et arrya med plads til 6 decimaltal => list[6];
2: Læg tallene fra 10.0 til 15.0 ind i arrayet, dette kan gøres på flere måder -
overvej hvilken der er bedst og hvad der er nemmest
3: Udskriv tallene fra arrayet
4: Læg 5 til alle tal i arrayet => for loop
5: Údskriv igen arrayet med de nye values
*/

#include <stdio.h>
#define SIZE 6 // maximum size of array

// function main begins program execution
int main(void)
{
	// 1. måde
	double list1[] = { 2398642,11.00,12.00,13.00,14.00,15.00 };
	// 2. måde
	double list2[6];
	// 3. måde
	double list3[SIZE];


	// populate array loop

	size_t i; // counter
	for (i = 0; i < 6; ++i) { // set the values
		list1[i] = 10.00 + 1.00 * i; // list1-3 can be used
		// only list2 & list3 are already missing values, but you can overwrite the list1 values here.
	} // end for


	for (i = 0; i < 6; ++i) {
		list1[i] = 15.00 + 1.00 * i;
	}

	// Print loop

	// Template for Output in tabular format 
	printf("%s%13s\n", "Element", "Value");
	// output contents of array in tabular format
	for (i = 0; i < 6; ++i) {
		printf_s("%7u%13.2f\n", i, list1[i]); // list1,list2,list3 can be used here
	} // end for
} // end main


