#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head : pointer to first node in list.
 * @n : integer data of new node.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	while (temp)
	{
		if (temp->next == NULL)
		{
			temp->next = new;
			new->next = NULL;
		}
		temp = temp->next;
	}
	return (new);
}
