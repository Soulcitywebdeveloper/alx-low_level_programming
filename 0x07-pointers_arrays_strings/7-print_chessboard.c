#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Prints the chessboard.
 * @a: The chessboard to print.
 *
 * Description: The chessboard is represented by an 8x8 array of chars,
 * where ' ' represents a white square and '#' represents a black square.
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
