#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_iterator - executes a function depending on the parameters
 * @array: parameter
 * @size: parameter
 * @action: parameter
 * Return: Always 0
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
