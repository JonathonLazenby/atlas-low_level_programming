
#include <stdio.h>
/* more headers goes there */

/**
 * main - This prints  "the alphabet in lowercase"
 * Return: returns nothing
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
