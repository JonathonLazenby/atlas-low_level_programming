#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to print
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return(NULL);

	new_node -> str = strdup(str);
	if (new_node -> str == NULL)
	{
		free(new_node);
		return(NULL);
	}
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
