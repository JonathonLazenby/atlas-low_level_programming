#include "main.h"

/**
 * reset_to_98 - updates int parameters and values
 *
 *@n: a pointer
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
