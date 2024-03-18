#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given position
 *
 * @h: checked list
 *
 * @idx: place to insert
 *
 * @n: new node value
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (idx > 1 && current != NULL)
	{
		current = current->next;
		idx--;
	}

	if (current == NULL)
	{
		return (NULL);
	}

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}
