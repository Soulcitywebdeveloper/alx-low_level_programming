#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}

	listint_t *current = *head;
	listint_t *previous = NULL;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	previous->next = current->next;
	free(current);

	return (1);
}
