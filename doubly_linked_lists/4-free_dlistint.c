#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a list
 *
 * @h: node head
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
