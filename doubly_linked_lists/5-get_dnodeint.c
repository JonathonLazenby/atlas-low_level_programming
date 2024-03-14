#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - # of elements in said linked list
 *
 * @h: checked list
 *
 * Return: # of elements
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++
	}
	return (current);
}
