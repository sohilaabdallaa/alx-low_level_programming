#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the listint_t linked list.
 *
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;          /* Move slow by one step */
		fast = fast->next->next;    /* Move fast by two steps */

		if (slow == fast)   /* If slow and fast meet at the same node */
		{
			slow = head;   /* Reset slow to the head of the list */
			while (slow != fast)
			{
				slow = slow->next;   /* Move slow by one step */
				fast = fast->next;   /* Move fast by one step */

				/* If slow and fast meet at the same node, it's the start of the loop */
				if (slow == fast)
					return (slow);
			}
			return (slow);   /* If no loop is found, return NULL */
		}
	}

	return (NULL);
}

