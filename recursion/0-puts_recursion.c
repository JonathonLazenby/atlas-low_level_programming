#include "main.h"
/**
 * _memset - concatenates two strings,
 *
 *@s: memory
 *
 *@b: byte
 *
 *@n: bytes entred
 * Return: to dest
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar("\n");
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
