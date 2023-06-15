#include "lists.h"
/**
 * get_dnodeint_at_index - search for a node with its index in list.
 * @head: pointer to the list.
 * @index: int index of node.
 * Return: node , if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	dlistint_t *current = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
