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
	}
	for (i = 0; current != NULL; i++)
	{
		if (i == index)
		{
			if (current->next == NULL)
				return (-1);
			else
			{
				node = current->next->next;
				current->next = node;
				free(current);
				return (1);
			}
		}
		current = current->next;
	}
	return (-1);
}
