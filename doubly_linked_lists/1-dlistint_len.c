#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elems in a linked list
 *
 * @h: node head
 *
 * Return: # of elements in linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
