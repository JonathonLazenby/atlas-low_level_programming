#include "main.h"

/**
 * _puts - Returns length of a string
 *
 *@str: a pointer
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
