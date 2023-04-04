#include "lists.h"
/**
 * sum_listint - calculate the  sum of all the data (n) of a list.
 * @head : pointer to first node in list.
 * Return:0 if list is empty, otherwise  sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int current_n = 0;

	while (head)
	{
		current_n = head->n;
		sum = sum + current_n;
		head = head->next;
	}
	return (sum);
}
