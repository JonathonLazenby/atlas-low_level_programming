
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - This prints  "positive and negative of random numbers,"
 * Return: returns nothing
*/

int main(void)
{
        int n;
	int d;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
	d = n  % 10;
        if (d > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n, d);
        } else if (n == 0)
        {
                printf("Last digit of %d is %d and is 0\n", n, d);
        } else
        {
                printf("Last digit of %d is - %d and is less than 6 and not 0\n", n, d);
        }

        return (0);
}
