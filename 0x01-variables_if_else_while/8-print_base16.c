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
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (n = 0; n < 6; n++)
	{
		putchar(n + 'a');
	}
	putchar('\n');
	return (0);
}
