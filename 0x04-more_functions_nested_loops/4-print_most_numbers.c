#include "main.h"
/**
 * print_most_numbers - prints the  digit of a number
 *
 * @i: skip any numbers that are equal to 2 or 4
 *
 * Return: value of the digit
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
