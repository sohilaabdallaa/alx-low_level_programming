#include "lists.h"
/**
 * get_nodeint_at_index - find node at given index in list.
 * @head : pointer to start of list.
 * @index : index of node in list, starting at 0.
 * Return:NULL if node does not exist otherwise return pointer to node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int counter = 0;

	temp = head;
	while (temp)
	{
		if (counter == index)
		{
			node = temp;
			break;
		}
		counter++;
		temp = temp->next;

	}
	if (node == NULL)
		return (NULL);
	return (node);


}
