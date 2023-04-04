#include "lists.h"
/**
 * pop_listint - deletes the head node of list.
 * @head : pointer to head of linked list.
 * Return: integer value of head or 0 if head is empity.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	temp->next =  NULL;
	free(temp);
	return (data);
}
