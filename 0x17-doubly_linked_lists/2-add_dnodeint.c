#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: double pointer to list.
 * @n: intger value to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	current->prev = new_node;
	new_node->prev = NULL;
	return (new_node);

}
