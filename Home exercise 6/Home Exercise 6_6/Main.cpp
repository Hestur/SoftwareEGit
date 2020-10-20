#include "Header.h"
#include <stdio.h>
#include <Windows.h>

#define SIZE 7

int main()
{
	int lottoArray1[SIZE];
	int lottoArray2[SIZE];
	int antalRigtige = 0;

	brugerLotto(lottoArray2, SIZE);
	tipsLotto(lottoArray1, SIZE);

	system("cls");
	printf_s("Dine Lotto tal:        ");

	for (size_t i = 0; i < SIZE; i++)
	{
		printf_s("%d ", lottoArray2[i]);
	}

	printf_s("\nDe udtrukne Lotto tal: ");

	for (size_t i = 0; i < SIZE; i++)
	{
		printf_s("%d ", lottoArray1[i]);
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			if (lottoArray2[i] == lottoArray1[j])
			{
				antalRigtige++;
				break;
			}
		}
	}

	if (antalRigtige < 4)
		printf_s("\n\nBeklager. Du havde kun %d rigtige, s\x86 du vandt ikke\n\n", antalRigtige);
	else
		printf_s("\n\nTillykke. Du havde %d rigtige, s\x86 du har vundet\n\n", antalRigtige);

	return 0;
}