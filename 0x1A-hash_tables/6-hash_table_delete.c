#include "hash_tables.h"

/**
 * hash_table_delete - deletes the whole hash table.
 * @ht:the hash table.
 * Return:Void.
**/

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *hs_node, *tmp = NULL;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		hs_node = ht->array[i];
		while (hs_node)
		{
			tmp = hs_node->next;
			free(hs_node->key);
			free(hs_node->value);
			free(hs_node);
			hs_node = tmp;
		}
		i++;
	}
	free(head->array);
	free(head);
}
