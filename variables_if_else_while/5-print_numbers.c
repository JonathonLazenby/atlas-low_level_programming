#include <stdio.h>
/* more headers goes there */

/**
 * main - This prints  "the alphabet in lowercase"
 * Return: returns nothing
*/

int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
