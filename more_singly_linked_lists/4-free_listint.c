#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
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
