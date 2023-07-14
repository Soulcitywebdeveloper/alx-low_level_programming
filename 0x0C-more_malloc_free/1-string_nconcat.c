#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate (up to n bytes)
 * @n: maximum number of bytes of s2 to concatenate
 *
 * Return: pointer to newly allo space in mem with s1 followed by the
 * first n bytes of s2 and null terminated,NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *new_str;

	/* treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get length of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* if n is greater than or equal to s2 length, use entire s2 string */
	if (n >= len2)
		n = len2;

	/* alloc space for new str with s1, first n bytes of s2, n null terminator */
	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
		return (NULL);

	/* concatenate s1 and first n bytes of s2 into new string */
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';

	return (new_str);
}
