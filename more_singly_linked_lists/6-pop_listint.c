#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes said linked list head node and returns data
 *
 * @head:
 *
 * Return:
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *next_node;
	
	if (*head == NULL)
		return (0);
	data = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	(*head) = next_node;
	return (data);
	
}
