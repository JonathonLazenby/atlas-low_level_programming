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

int sum_dlistint(dlistint_t *head)
{
	int_sum = 0
	dlistint_t *current = head

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

