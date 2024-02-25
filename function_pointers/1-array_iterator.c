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

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (action != NULL)
		{
			action(array[i]);
		}
	}
}
