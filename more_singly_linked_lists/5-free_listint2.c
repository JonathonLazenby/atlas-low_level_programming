#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

void free_listint2(listint_t **head)
{
	listint_t *next_node;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	*head = NULL;
}
