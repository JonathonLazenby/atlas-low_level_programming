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

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
