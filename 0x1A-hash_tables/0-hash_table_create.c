#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table
 * @size:int size of the array
 * Return:pointer to the newly created hash table, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;

	hashTable = (hash_table_t *) malloc(sizeof(hash_table_t));
	hashTable->size = size;
	hashTable->array = calloc(size, sizeof(hash_node_t *));

	if (!hashTable->array)
	{
		free(hashTable);
		return (NULL);
	}
	return (hashTable);
}
