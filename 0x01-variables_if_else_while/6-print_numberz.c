#include <stdio.h>
/**
 *  main - Entry point and only allowed output
 *
 *  Return: Alway 0 (succesfull)
*/
int main(void)
{
	int i = 0;

		while (i < 10)
		{
			putchar('0' + i);
			i++;
		}
		putchar('\n');
		return (0);
}
