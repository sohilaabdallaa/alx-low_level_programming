#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a list
 * @head: pointer to list.
 * @index: int index of node to be deleted.
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *node;
	unsigned int i = 0;

	if (!head)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		current->prev = NULL;
		current->next = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	node = current->next->next;
	free(current->next);
	current->next = node;
	return (1);

}
