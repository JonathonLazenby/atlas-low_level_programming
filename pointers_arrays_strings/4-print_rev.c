#include "main.h"

/**
 * strlen - Returns length of a string
 *
 *@*s: a pointer
 *
 */

void print_rev(char *s)
{
	int length, i;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}	
	_putchar('\n');
}
