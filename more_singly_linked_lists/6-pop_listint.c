#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *next_node;
	
	if (*head == NULL)
		return(0);
	data = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	(*head) = next_node;
	return(data);
		
}
