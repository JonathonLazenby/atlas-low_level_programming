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

size_t print_list(const list_t *h)
{
	size_t node_count;
	
	node_count = 0;

	printf("[");
	
	while (h != NULL)
	{
		printf("'%s'", h -> str);
		node_count++;
		h = h -> next;
		if (h != NULL)
		{
			printf(", ");
		}
	}
	printf("]\n");

	return(node_count);
}
