#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 *
 *@n: how long the straight line is
 *
 * Return: nothing
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
