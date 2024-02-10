#include "main.h"

/**
 * reset_to_98 - updates int parameters and values
 *
 *@n: a pointer
 *
 */

void _print_rev_recursion(char *s)
{
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s + 1);
	_puts_recursion(*s)
}
