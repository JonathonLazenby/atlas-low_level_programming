#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - # of elements in said linked list
 *
 * @h: checked list
 *
 * Return: # of elements
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;
	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
