#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
