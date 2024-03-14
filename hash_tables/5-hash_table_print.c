#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
/**
 * list_len - # of elements in said linked list
 *
 * @h: checked list
 *
 * Return: # of elements
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	
	if (ht == NULL)
	{
		return;
	}
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		printf("before");
		current = ht->array[i];
		printf("'%s'", current->key);
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (current->next != NULL)
			{
				printf(", ");
			}
			current = current->next;
		}
	}
	printf("}\n");
}
