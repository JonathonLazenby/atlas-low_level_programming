#include <stdio.h>
#include "lists.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return(NULL);

	new_node -> n = n;
	new_node -> next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current -> next != NULL)
		{
			current = current -> next;
		}
		current -> next = new_node;
	}
	return(new_node);
}
