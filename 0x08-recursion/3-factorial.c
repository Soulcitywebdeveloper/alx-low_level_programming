#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number.
 * @n: number to calculate factorial for
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	int result = 1;

	for (int i = 2; i <= n; ++i)
	{
		result *= i;
	}

	return (result);
}
