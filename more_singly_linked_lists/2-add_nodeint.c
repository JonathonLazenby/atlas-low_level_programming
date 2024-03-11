#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds new node at beginning of said linked list
 *
 * @head: 1st Element
 *
 * @n:thing being added
 *
 * Return: the address of changed element
 */

#include <unistd.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
