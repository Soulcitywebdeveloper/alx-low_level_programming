#include "main.h"
#include <stdio.h>
/**
 * *_memset - concatenates two char
 * @s: char pointer
 * @b: desired constant
 * @n: first byte
 *
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *ptr = (unsigned char *)s;

	for (unsigned int i = 0; i < n; i++)
	{
		ptr[i] = b;
	}
	return (s);
}
