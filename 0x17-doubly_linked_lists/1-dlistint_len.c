#include "lists.h"
/**
 * dlistint_len - get the length of linked list.
 * @h: pointer to list
 * Return: the number of elements in a linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	if (!h)
	{
		return (0);
	}
	else
	{
		while (h)
		{
			num_nodes++;
			h = h->next;
		}
		return (num_nodes);
	}
}
