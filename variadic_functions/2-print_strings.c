#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a newline using only _putchar.
 *
 * Return: Always 0
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	unsigned int i;
	char *str;

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n")
}
