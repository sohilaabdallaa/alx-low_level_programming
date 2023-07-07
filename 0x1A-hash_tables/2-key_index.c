#include "hash_tables.h"
#include<string.h>
/**
 * key_index - produce the index of the key
 * @key:key produced by hash function.
 * @size: the size of the array of hash table.
 * Return:the index at which the key/value pair
 *		should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size < 1)
		return (NULL);
	if (!key)
		return (NULL);
	return (strlen(key) % size);
}
