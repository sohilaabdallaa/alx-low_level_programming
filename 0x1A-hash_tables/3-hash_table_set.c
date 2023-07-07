#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_set - adds an element to the hash table.
 * @ht:the hash table you want to add or update the key/value to.
 * @key:the key of the node.
 * @value:the value of the node.
 * Return:1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hs_node = NULL;
	unsigned long int index = 0;

	if (key == NULL || value == NULL)
		return (0);
	hs_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!hs_node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		free(hs_node);
		ht->array[index]->value = strdup(value);
		return (1);
	}
	hs_node->key = strdup(key);
	hs_node->value = strdup(value);
	hs_node->next = ht->array[index];
	ht->array[index] = hs_node;
	return (1);
}
