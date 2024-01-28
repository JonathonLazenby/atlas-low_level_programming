#include "main.h"

/**
 * swap_int - swaps integer values
 *
 *@b: a pointer
 * @a: a pointer
 *
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
