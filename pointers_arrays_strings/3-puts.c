#include "main.h"

/**
 * strlen - Returns length of a string
 *
 *@*s: a pointer
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
