#include "main.h"

/**
 * _puts - Returns length of a string
 *
 *@s: a pointer
 *
 *Return: no return.
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
