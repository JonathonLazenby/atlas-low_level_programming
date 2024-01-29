#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints a half string.
 *
 * @str: string
 *
 * Return: none
 */

void puts_half(char *str)
{
	int length, i;

	length = 0;

	while (str[length] != '\0')
	{

		length++;
	}

	if (length % 2 == 1)
		i = length / 2;
	else
		i = (length - 1) / 2;

	i++;
	while (i < length)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
