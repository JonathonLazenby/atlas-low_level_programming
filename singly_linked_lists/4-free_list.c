#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list  - frees list_t
 *
 * @head: 1st list
 */

#include <unistd.h>

void free_list(list_t *head)
{
	list_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
