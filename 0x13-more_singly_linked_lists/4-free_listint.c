#include "lists.h"
/**
 * free_listint -  that frees a listint_t list.
 * @head : pointer to head of list.
 * Return : void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
	free(head);
}
