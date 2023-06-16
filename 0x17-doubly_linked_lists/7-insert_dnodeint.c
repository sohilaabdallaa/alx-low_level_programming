#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to head of list.
 * @idx: index to add into.
 * @n:int value of the node
 * Return:the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (!*h)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	current = *h;
	for (i = 0; i < idx - 1 && current; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new_node->n = n;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
