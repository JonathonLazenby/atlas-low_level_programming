#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return(head);
}
