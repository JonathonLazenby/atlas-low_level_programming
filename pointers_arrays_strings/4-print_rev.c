#include<stdio.h>
#include "main.h"

/**
 * strlen - Returns length of a string
 *
 *@*s: a pointer
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
