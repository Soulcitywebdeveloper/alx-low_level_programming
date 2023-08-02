#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (len);

	while (*h)
	{
		len++;
		tmp = (*h)->next;
		free(*h);
		if (tmp >= *h)
			break;
		*h = tmp;
	}

	*h = NULL;
	return (len);
}
