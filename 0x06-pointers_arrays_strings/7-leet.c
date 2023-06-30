#include "main.h"
#include <stdio.h>
/**
 * leet - change vowels to numbers.
 * @s: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int b = 0;
	int c;

	while (*(s + b) != '\0')
	{
		for (c = 0; c <= 9; c++)
		{
			if (*(s + b) == a[c])
			{
				*(s + b) = n[c];
			}
		}
		b++;
	}
	return (s);
}
