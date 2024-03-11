#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list
 *
 * @h: 1st element
 *
 * Return: elements in list
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count;

	node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", (h->n));
		node_count++;
		h = h->next;
	}
	return (node_count);
}
