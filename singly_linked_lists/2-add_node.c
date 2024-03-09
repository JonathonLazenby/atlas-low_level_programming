#include <stdio.h>
#include "lists.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

list_t *add_node(list_t **head, const char *str)
