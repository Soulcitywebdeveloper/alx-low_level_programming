#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - Checks if a string is palindrome
 * @s: String to check
 * Return: 1 if string is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i, j, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}

	return (1);
}
