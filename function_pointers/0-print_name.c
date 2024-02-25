#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a newline using only _putchar.
 *
 * Return: Always 0
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
