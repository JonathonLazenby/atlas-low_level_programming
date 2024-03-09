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

listint_t *add_nodeint_end(listint_t **head, const int n)
