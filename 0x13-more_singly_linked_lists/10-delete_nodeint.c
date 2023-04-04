#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a list.
 * @head : pointer to a pointer to head of list.
 * @index : index of the node that should be deleted. Index starts at 0.
 * Return:1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del_node;
	unsigned int counter;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (counter = 0; counter < index - 1; counter++)
	{
		temp = temp->next;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}
	del_node = temp->next;
	temp->next = del_node->next;
	free(del_node);
	return (1);
}
