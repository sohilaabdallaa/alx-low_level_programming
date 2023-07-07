#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table we want to look into
 * @key: the key we are looking for
 * Return: value associated with the element, otherwise NULL
**/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hs_node = NULL;
	unsigned long int idx = 0;

	if (!key || !ht)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	hs_node = ht->array[idx];

	while (hs_node != NULL)
	{
		if (strcmp(hs_node->key, key) == 0)
			return (hs_node->value);
		hs_node = hs_node->next;
	}

	return (NULL);
}
