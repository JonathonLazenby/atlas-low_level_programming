#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"
#include <string.h>

/**
 * list_len - # of elements in said linked list
 *
 * @h: checked list
 *
 * Return: # of elements
 */

void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
		return;

	unsigned long int i;
	hash_node_t *current, *temp;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
