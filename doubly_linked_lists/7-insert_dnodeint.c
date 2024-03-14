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

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
}
