#include <stdio.h>


int main(void)
{
	for (int counter = 50; counter >= 0; counter -= 2)
		printf_s("%d ", counter);

	printf_s("\n\n");

	return 0;
}