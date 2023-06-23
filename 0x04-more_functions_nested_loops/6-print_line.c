#include "main.h"

/**
 *print_line - check the code
 *
 *@n: draw new lines
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
