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

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
