
#include <stdio.h>
/* more headers goes there */

/**
 * main - This prints  "the alphabet in lowercase"
 * Return: returns nothing
*/

int main(void)
{
        int digit = 0;

        while (digit <= 9)
        {
		if (digit > 0 && digit < 9)
		{
                	putchar(',');
			putchar(' ');
		}
		putchar(digit);
                digit++;
        }
        putchar('\n');

        return (0);
}
