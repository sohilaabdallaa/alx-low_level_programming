#include "lists.h"

/**
 * reverse_listint - reversed a list.
 * @head: pointer to head of list.
 * Return: pointer to first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;
	return (*head);
}
