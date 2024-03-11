#include <stdio.h>
#include "lists.h"

/**
 * list_len - # of elements in said linked list
 *
 * @h: checked list
 *
 * Return: # of elements
 */

#include <unistd.h>

size_t list_len(const list_t *h)
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
