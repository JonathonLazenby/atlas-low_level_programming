#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a newline using only _putchar.
 *
 * Return: Always 0
 *
 */

int *array_range(int min, int max)
{
	int i, size, *arr;

	if (min > max)
		return (NULL);

	size = max - min +1
	arr = (int*)malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; ++i)
		arr[i] = min + i;
	
	return (arr);
}
