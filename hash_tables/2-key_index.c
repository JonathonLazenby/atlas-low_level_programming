#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * key_index - gives you index of a key
 *
 * @key: key
 *
 * @size: array size
 *
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}
