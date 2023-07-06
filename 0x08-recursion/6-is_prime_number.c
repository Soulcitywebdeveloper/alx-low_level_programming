#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Checks if a given number is prime
 *
 * @n: The number to be checked
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_number(int n)
{
	int i;

	if (n < 2)
		return (0);

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
