#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - elements in a linked list.
 * @h : head of list.
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
