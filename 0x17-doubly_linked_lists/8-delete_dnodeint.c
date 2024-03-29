#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a list
 * @head: pointer to list.
 * @index: int index of node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (!head || *head == NULL)
		return (-1);
	while (index && current)
	{
		current = current->next;
		index--;
	}
	if (index)
		return (-1);

	if (!index && current)
	{
		if (current->next)
			current->next->prev = current->prev;
		if (current->prev != NULL)
			current->prev->next = current->next;
		else
			*head = current->next;
		free(current);
		return (1);
	}
	return (-1);

}
