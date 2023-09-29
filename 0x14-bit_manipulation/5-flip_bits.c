#include "main.h"
/**
 * flip_bits - rtrn d num of bits flipped to get frm one num to another
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count++;
		xor_result = xor_result & (xor_result - 1);
	}

	return (count);
}
