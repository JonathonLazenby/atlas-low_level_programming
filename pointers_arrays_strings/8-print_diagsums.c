#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps integer values
 *
 *@b: a pointer
 * @a: a pointer
 *
 */

void print_diagsums(int *a, int size)
{
	int main_diagSum = 0;
	int anti_diagSum = 0;
	int i;

	for ( i = 0; i < size; i++)
	{
		main_diagSum += *(a + i * size + i);
		anti_diagSum += *(a + i * size + (size - 1 - i));
	}
	printf("%d, ", main_diagSum);
	printf("%d ", anti_diagSum);
}
