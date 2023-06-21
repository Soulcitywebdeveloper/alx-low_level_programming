#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
/**
 *  print_alphabet - ENTRY POINT ALHABET a -z
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
