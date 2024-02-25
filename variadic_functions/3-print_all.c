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
	int num;
	unsigned int i;
	int first;

	i = 0;
	first = 1;

	va_start(args, format);

	while (format && format[i])
	{
		if (!first)
		{	
			printf(", ");
		}
		first = 0;

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
