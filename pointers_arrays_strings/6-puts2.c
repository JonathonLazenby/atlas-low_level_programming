#include<stdio.h>
#include "main.h"
/**
 * puts2 - prints a char out of two.
 *
 * @str: string.
 *
 * Return: none
 */

void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{

		if (length % 2 == 0)
			putchar(str[length]);
		length++;
	}
	putchar('\n');
}
