#include <stdio.h>
#include "lists.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

#include <unistd.h>

size_t listint_len(const listint_t *h)
{
	size_t count_node;

	count_node = 0;

	while (h != NULL)
	{
		count_node++;
		h = h -> next;
	}
	return(count_node);
}
