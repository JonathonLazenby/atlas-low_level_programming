#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal
 *
 *@n: how long diagonal line is
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;
		
		for (i= 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}else
	{
		_putchar('\n');
	}
}
