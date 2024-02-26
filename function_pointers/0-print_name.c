#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_name - prints name
 * @name: what gets printed
 * @f: pointer
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
