#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns # of elements in said linked list
 *
 * @h: list to be checked
 *
 * Return: # of elements
 */

#include <unistd.h>

size_t listint_len(const listint_t *h)
{
	size_t count_node;

	count_node = 0;

	while (h != NULL)
	{
		count_node++;
		h = h->next;
	}
	return (count_node);
}
