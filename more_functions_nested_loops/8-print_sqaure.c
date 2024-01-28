#include "main.h"

/**
 * print_sqaure - prints a sqaure line in the terminal
 *
 * Return: nothing
 */

void print_sqaure(int size)
{
	if (n > 0)
	{
		int i, j;
		for (i=0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
	else{
		_putchar('\n');
	}
}
