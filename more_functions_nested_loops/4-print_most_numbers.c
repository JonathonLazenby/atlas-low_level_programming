#include "main.h"

/**
 * print_most_numbers = prints one through nine without two and four
 *
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit != '2' && digit != '4')
		{
			_putchar(digit);
		}
	}
	_putchar('\n');
}
