#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: double pointer to list
 * @n: intger data to be added as the value of node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *lastNode = NULL;
	dlistint_t *current = NULL;

	current = *head;
	while (current)
	{
		if (current->next == NULL)
			lastNode = current->next;
		current = current->next;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = lastNode;
	if (lastNode != NULL)
		lastNode->next = new_node;
	return (new_node);
}
