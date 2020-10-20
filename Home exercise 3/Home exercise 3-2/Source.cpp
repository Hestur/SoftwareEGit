#include <stdio.h>


int main(void)
{
	for (int counter = 100; counter >= 50; counter -= 10)
		printf_s("%d ", counter);

	printf_s("\n\n");

	return 0;
}