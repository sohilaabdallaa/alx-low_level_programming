#include "hash_tables.h"
/**
 * key_index - produce the index of the key
 * @key:key produced by hash function.
 * @size: the size of the array of hash table.
 * Return:the index at which the key/value pair
 *		should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
