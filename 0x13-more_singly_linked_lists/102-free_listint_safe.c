#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *tmp;
	size_t nodes = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = (*h)->next;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			tmp = *h;
			while (slow != tmp)
			{
				nodes++;
				tmp = tmp->next;
				tmp = tmp->next;
			}

			nodes++;
			tmp = tmp->next;

			while (tmp != slow)
			{
				nodes++;
				tmp = tmp->next;
				tmp = tmp->next;
			}

			tmp = *h;
			while (tmp->next != slow)
			{
				nodes++;
				tmp = tmp->next;
			}

			tmp->next = NULL;
			*h = NULL;
			return (nodes);
		}
	}

	tmp = *h;
	while (*h)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		nodes++;
	}

	*h = NULL;

	return (nodes);
}

