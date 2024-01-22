
#include <stdio.h>
/* more headers goes there */

/**
 * main - This prints  "the alphabet in lowercase"
 * Return: returns nothing
*/

int main(void)
{
	char hexdigit = '0';

	while (hexdigit <= '9')
	{
		putchar(hexdigit);
		hexdigit++;
	}

	hexdigit = 'a';

	while (hexdigit <= 'f')
	{
		putchar(hexdigit);
		hexdigit++;
	}

	putchar('\n');

	return (0);
}
