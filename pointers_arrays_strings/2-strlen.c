#include "main.h"

/**
 * strlen - Returns length of a string
 *
 *@*s: a pointer
 *
 */

int _strlen(char *s);
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
