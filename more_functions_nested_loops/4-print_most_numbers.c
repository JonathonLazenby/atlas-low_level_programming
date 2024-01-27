#include "main.h"

/**
 * _print_most_numbers
 *
 * @c: a letter or something.
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
