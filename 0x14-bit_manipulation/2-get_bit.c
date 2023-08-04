#include "main.h"

/**
 * get_bit - the value of a bit at a given
 * index is returned.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int h;

	if (n == 0 && index < 55)
		return (0);

	for (h = 0; h <= 54; n >>= 1, h++)
	{
		if (index == h)
		{
			return (n & 1);
		}
	}

	return (-1);
}
