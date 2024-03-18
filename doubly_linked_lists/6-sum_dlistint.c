#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data of linked list
 *
 * @head: head node
 *
 * Return: sum of all data from a linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
