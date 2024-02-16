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

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t t_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t_size = nmemb * size

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
