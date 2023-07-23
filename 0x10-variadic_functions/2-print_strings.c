#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings followed by a new line
 * @separator: String to be printed between the strings
 * @n: Number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, const char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
