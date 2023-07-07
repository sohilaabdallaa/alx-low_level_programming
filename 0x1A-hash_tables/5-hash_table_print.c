#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht:hash table.
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hs_node = NULL;
	unsigned int i = 0, tmp = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] == NULL)
		{
			i++;
			continue;
		}
		if (tmp == 1)
			printf(", ");
		tmp = 1;
		hs_node = ht->array[i];
		while (hs_node)
		{
			printf("'%s': '%s'", hs_node->key, hs_node->value);
			if (hs_node->next != NULL)
				printf(", ");
			hs_node = hs_node->next;
		}
		i++;
	}
	printf("}\n");
}
