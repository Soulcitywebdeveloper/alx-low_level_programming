#include <stdio.h>
/**
 *  main - Entry point and only allowed output
 *
 *  Return: Alway 0 (succesfull)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
