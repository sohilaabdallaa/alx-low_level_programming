#include "listis.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to double linked list.
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		number_nodes++;
		printf("%d \n", h->n);
		h = h->next;
	}
	return (number_nodes);
}
