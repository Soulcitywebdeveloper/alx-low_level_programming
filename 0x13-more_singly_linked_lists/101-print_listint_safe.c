#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}

	return (count);
}
