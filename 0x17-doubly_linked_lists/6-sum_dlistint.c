#include "lists.h"
/**
 * sum_dlistint - sum all data of a list.
 * @head: pointer to list.
 * Return: sum, if the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	int i = 0;

	if (!head)
		return (0);

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
