#include "main.h"
#include <stdio.h>
/**
 * wildcmp - function to compare two strings s1 and s2
 * @s1: first string to be compared
 * @s2: second string to be compared, can include the * wildcard
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		while (*(s2 + 1) == '*')
			s2++;

		if (*s1 != '\0' && *(s2 + 1) == '\0')
			return (1);
		else if (*s1 == '\0' || *(s2 + 1) == '\0')
			return (wildcmp(s1, s2 + 1));
		else
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
