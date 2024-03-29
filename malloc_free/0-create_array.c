#include "main.h"
#include <stdlib.h>

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a newline using only _putchar.
 *
 * Return: Always 0
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *charArray;

	if (size == 0)
		return (NULL);
	charArray = (char*)malloc(size *sizeof(char));

	if (charArray == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		charArray[i] = c;

	return (charArray);
}
