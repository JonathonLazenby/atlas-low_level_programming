#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a newline using only _putchar.
 *
 * Return: Always 0
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size <= 0)
	{
		return (-1);
	}

	for (i =0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
		return (-1);
}
