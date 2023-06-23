#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			num = j;
			if (num > 9)
			{
				_putchar(num / 10 + '0');
				num = num % 10;
			}
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
