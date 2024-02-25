#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a newline using only _putchar.
 *
 * Return: Always 0
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i;
	int first;
	const char *separator;

	i = 0;
	first = 1;
	separator = "";

	va_start(args, format);

	while (format && format[i])
	{
	 	if (!first)
                {
                        printf("%s", separator);
                }
		first = 0;

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				separator = ", ";
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				separator = ", ";
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				separator = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", (str == NULL) ? "(nil)": str);
				separator = ", ";
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
