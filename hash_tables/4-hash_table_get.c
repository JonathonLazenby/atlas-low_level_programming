#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * list_len - # of elements in said linked list
 *
 * @h: checked list
 *
 * Return: # of elements
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *current;
		
	index = key_index((const unsigned char *)key, ht->size);
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
