#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list & sets the head to NULL.
 * @head : the head of list.
 * Return : void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *del_node;

	if (*head == NULL)
		return;
	del_node = *head;
	while (del_node != NULL)
	{
		temp = del_node->next;
		free(del_node);
		del_node = temp;
	}
	*head = NULL;
}
