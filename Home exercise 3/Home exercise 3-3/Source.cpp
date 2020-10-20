#include <stdio.h>


int main(void)
{
	for (char c = 'A'; c <= 'F'; ++c)
		printf_s("%c ", c);

	printf("\n\n");

	for (int c = 'A'; c <= 'F'; ++c)
		printf_s("%c ", c);

	printf_s("\n\n");

	for (char c = 65; c <= 70; ++c)
		printf_s("%c ", c);

	printf_s("\n\n");

	for (int c = 65; c <= 70; ++c)
		printf_s("%c ", c);

	printf_s("\n\n");

	for (char c = 'A'; c <= 'F'; ++c)
		printf_s("%d ", c);

	printf_s("\n\n");

	for (int c = 'A'; c <= 'F'; ++c)
		printf_s("%d ", c);

	printf_s("\n\n");

	return 0;
}