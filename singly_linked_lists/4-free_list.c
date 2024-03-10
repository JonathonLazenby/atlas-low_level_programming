#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

#include <unistd.h>

void free_list(list_t *head)
{
	list_t *next_node;

	while (head != NULL)
	{
		next_node = head -> next;
		free(head -> str);
		free(head);
		head = next_node;
	}
}
