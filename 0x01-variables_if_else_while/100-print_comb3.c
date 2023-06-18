#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - Entry point and only allowed output
 *
 *  Return: Alway 0 (succesfull)
*/
int main(void)
{
	int n = 0;

	while (n < 90)
	{
		if (n % 10 > n / 10)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			if (n < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar(n++);
	}
	return (0);
}
