#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head : pointer to a pointer to head of list.
 * @idx : index where new node will be added, Index starts at 0.
 *@n : integer data of new node.
 * Return:the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int counter = 0;
	temp = *head;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return(new);
	}
	/*check if the index idx is out of bounds, 
	 * i.e., greater than the number of nodes in the list*/
	for (counter = 0; counter <idx - 1; counter++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}

