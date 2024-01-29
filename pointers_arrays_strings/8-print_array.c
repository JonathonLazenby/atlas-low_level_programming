#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the parts of an array and integers.
 *
 * @a: input array.
 *
 * @n: elements
 *
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
