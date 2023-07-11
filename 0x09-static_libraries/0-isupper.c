#include "main.h"
#include <stdio.h>
/**
 * _isupper - Checks for UPPER alphabet
 * @c: Character to be checked
 * Return: if character is lowercase, otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
