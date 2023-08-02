#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

	if (tortoise == hare)
	{
		tortoise = head;
		while (tortoise != hare)
		{
			tortoise = tortoise->next;
			hare = hare->next;
		}
		return (tortoise);
	}
	}

	return (NULL);
}
