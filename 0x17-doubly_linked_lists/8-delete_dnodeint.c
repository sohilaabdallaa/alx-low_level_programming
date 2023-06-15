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
	unsigned int i = 0;

	if (!head)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		current->prev = NULL;
		current->next = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);

}
