#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
	{
		return(0);
	}
	result = 0;
	while (*b != '\0')
	{
		if (*b != 0)
		{
			return(0);
		}
		result = result * 2 + (*b - '0');
		b++;
	}
	return(result);
}
