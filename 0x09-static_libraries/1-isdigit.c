#include "main.h"
/**
 * _isdigit - Checks for number order
 *
 * @c: number to check for
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
