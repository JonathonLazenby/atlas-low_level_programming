#include<stdio.h>
#include "main.h"

/**
 * print_rev - prints a string backwards
 *
 *@s: a pointer
 *
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;

	}

	length--;

	while (length >= 0)
	{
		putchar(s[length]);
		length--;
	}
	putchar('\n');

}
