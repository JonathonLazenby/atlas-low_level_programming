#include <stdio.h>
#include "main.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

void print_binary(unsigned long int n)
{
	int i, size;
	unsigned long int mask;

	size = sizeof(unsigned long int) * 8 - 1;
	for (i = size; i >= 0; i--)
	{
		mask = 1UL << i;
		if (n & mask)
			putchar('1');
		else
			putchar('0');
	}
	putchar('\n');
}
