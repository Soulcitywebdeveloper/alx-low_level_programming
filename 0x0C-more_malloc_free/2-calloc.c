#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements to allocate memory for
 * @size: size in bytes of each element to allocate memory for
 *
 * Return: pointer to the all mem or NULL if malloc fails or nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return ((void *) ptr);
}
