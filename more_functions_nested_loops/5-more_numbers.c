#include "main.h"

/**
 * more_numbers - prints zero to fourteen, ten times
 *
 */

void more_numbers(void)
{
	char digit;
	
	for (int i = 0; i < 10; i++)
	{
		for (digit = '0'; digit <= '9'; digit++)
		{
			_putchar(digit);
		}
	
		_putchar('\n');
	}
}
