#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns sum of all data of said linked list
 *
 * @head: 1st element
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
