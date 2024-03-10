#include <stdio.h>
#include "lists.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */

#include <unistd.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return(NULL);

	new_node -> n = n;
	new_node -> next = *head;
	*head = new_node;
	return(new_node);
}
