#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees listint_t
 *
 * @head: 1st element
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head;
		head = head->next;
		free(next_node);
	}
}
