#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees listint_t
 *
 * @head: 1st element
 *
 * Return: freed list
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
