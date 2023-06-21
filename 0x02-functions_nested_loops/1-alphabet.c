#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 *  main - Entry point and print alphabet
 *
 *  Return: Alway 0 (succesfull)
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
