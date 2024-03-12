#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts new node at given position
 *
 * @head: 1st element
 *
 * @idx: new node location
 *
 * Return: the address of the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *current;
	unsigned int i;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
