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

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	lastNode = *head;
	while (lastNode->next)
		lastNode = lastNode->next;
	lastNode->next = new_node;
	new_node->prev = lastNode;
	new_node->next = NULL;
	return (new_node);
}
