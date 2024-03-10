#include <stdio.h>
#include "lists.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count;

	node_count = 0;
	
	while (h != NULL)
	{
		printf("%d\n", (h -> n));
		node_count++;
		h = h -> next;
	}

	return(node_count);
}
