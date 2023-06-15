#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: double pointer to list.
 * @n: intger value to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = *head;
	if (current)
		current->prev = new_node;
	*head = new_node;
	return (new_node);

}
