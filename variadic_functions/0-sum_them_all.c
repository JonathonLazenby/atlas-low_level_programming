#include "variadic_functions.h"
#include <stdio.h>
#include <strarg.h>

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a newline using only _putchar.
 *
 * Return: Always 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_args(args, int);
	}
	va_end(args);

	return (sum);
}
