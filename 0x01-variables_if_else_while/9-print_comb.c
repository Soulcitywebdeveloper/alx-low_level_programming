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
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		for (i = 0; i != 10; i++)
		{
			putchar(i + '0');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
