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

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *new_node;
	unsigned long int index;
	
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmy(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current-> value)
			{
				return (0);
			}
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
