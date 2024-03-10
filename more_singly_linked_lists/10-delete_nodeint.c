#include <stdio.h>
#include "lists.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *current;

	if (*head == NULL)
	{
		return(-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp)
		return(1);
	}
	current = *head;
	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		return(-1);
	}
	temp = current->next;
	current->next = current->next->next;
	free(temp);
	return(1);
}
