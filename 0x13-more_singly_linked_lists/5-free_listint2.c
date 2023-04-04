#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list & sets the head to NULL.
 * @head : the head of list.
 * Return : void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *deleted;

	if (*head == NULL)
		return;
	deleted = *head;
	while (*head)
	{
		temp = deleted->next;
		free(deleted);
		deleted = temp;
	}
	*head = NULL;
	head = NULL;
}
