#include "main.h"

/**
 * print_triangle - prints a triangle in terminal
 *
 * @size: num of line
 *
 * Return: none
 */
void print_triangle(int size)
{
	int k, m;

	for (k = 0; k < size; k++)
	{
		for (m = 1; m < (size - k); m++)
			_putchar(' ');
		
		for (m--; m < size; m++)
			_putchar(35);
		
		if (k < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
