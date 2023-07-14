#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory block to allocate
 *
 * Return: Pointer to allocated memory block
 * If fails,function end  the process with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
