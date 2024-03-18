#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a linked list
 *
 * @head: head node
 *
 * @index: node to get
 *
 * Return: address of certain node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	return (current);
}
