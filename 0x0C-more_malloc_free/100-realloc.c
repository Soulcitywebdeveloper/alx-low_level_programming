#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to reallocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		new_ptr[i] = old_ptr[i];
	free(ptr);
	return (new_ptr);
}
