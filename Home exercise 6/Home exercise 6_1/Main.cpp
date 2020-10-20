#include "Lotto.h"
#include <stdio.h>

#define SIZE 7

int main()
{
	int lottoArray1[SIZE];

	tipsLotto(lottoArray1, SIZE);

	for (size_t i = 0; i < SIZE; i++)
	{
		printf_s("%d ", lottoArray1[i]);
	}

	printf_s("\n\n");

	return 0;
}