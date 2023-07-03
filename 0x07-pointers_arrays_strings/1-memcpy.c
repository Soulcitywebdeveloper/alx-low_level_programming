#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n--)
	{
	  *dest_ptr++ = *src_ptr++;
	}

	return (dest);
}
