#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i, size;
	unsigned long int mask;

	size = sizeof(unsigned long int) * 8 - 1;
	for (i = size; i >= 0; i--)
	{
		mask = 1UL << i;
		if (n && mask)
			_putchar('1');
		else
			_putchar('0');
	}
	_putchar('\n');
}
