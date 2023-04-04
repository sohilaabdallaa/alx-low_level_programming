#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 * @head : pointer to head of linked list.
 * Return : if the linked list is empty return 0 otherwise return head data.
 */
int pop_listint(listint_t **head)
{
	int data ;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
