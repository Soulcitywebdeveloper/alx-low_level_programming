#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to the head node of the list.
 * Return: The data of the deleted node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;

	free(temp);
	return (data);
}
