#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - Returns length of a string
 *
 *@s: a pointer
 *
 *Return: length of string
 *
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
} 

size_t print_list(const list_t *h)
{
	size_t node_count, str_len;

	node_count = 0;
	
	while (h != NULL)
	{
		str_len = (h -> str != NULL) ? _strlen(h -> str): 0;

		printf("[%lu] %s\n", str_len, (h -> str != NULL) ? h -> str: "(nil)");
		node_count++;
		h = h -> next;
	}

	return(node_count);
}
