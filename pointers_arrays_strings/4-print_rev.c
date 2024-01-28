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
	int length, i;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	
	for (i = length -1; i >= 0; i--)
	{
		putchar(s[i]);
	}	
	putchar('\n');
}
