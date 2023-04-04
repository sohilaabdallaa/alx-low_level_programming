#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *prev = NULL;

	while (current)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		prev = current;
		current = current->next;

		if (prev <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			printf("Loop detected, exiting...\n");
			exit(98);
		}
	}

	return (count);
}

