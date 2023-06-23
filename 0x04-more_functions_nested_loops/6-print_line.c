#include "main.h"

/**
 * print_line - check the code
 *
 *@n: draw new lines
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
