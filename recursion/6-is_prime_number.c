#include "main.h"
/**
 * is_prime_number - figuires out if its a prime number
 *
 * prime_helper - helps function operate
 *
 * div - works with prime number
 *
 *@n: possible prime number
 *
 * Return: 1 or 0
 */

int prime_helper(int n, int div)
{
	if (n <= 1)
		return (0);
	if (div == 1)
		return (1);
	if (n % div == 0)
		return (0);
	return (prime_helper(n, div - 1));
}


int is_prime_number(int n)
{
	return (prime_helper(n, n / 2));
}
