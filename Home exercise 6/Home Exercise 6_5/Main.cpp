#include "lotto.h"
#include <stdio.h>

#define SIZE 7

int main()
{
	int lottoArray2[SIZE];

	brugerLotto(lottoArray2, SIZE);

	for (size_t i = 0; i < SIZE; i++)
	{
		printf_s("%d ", lottoArray2[i]);
	}

	printf_s("\n\n");

	return 0;
}