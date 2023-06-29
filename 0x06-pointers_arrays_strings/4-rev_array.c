#include "main.h"
#include <stdio.h>
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int s, b, e;

	b = 0;
	e = n - 1;
	while (b < e)
	{
		s = *(a + b);
		*(a + b) = *(a + e);
		*(a + e) = s;
		b++;
		e--;
	}
}
