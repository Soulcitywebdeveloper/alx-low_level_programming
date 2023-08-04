#include "main.h"

/**
 * print_binary - prints the binary dat represent
 * a number.
 * @n: unsigned  int.
 *
 * Return: no retrn.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
