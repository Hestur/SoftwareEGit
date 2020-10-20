#include "CountWordsInString.h"
#include <stdio.h>
#include <stdlib.h>

void CountWordsInString(char arr[], const int SIZE) {
	int count = 0, i;
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == ' ' && arr[i + 1] != ' ')
			count++;
	}
	printf("Number of words in given string are: %d\n", count + 1);
}