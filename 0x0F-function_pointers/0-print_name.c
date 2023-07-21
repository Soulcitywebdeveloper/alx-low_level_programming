#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to a string containing the name to be printed
 * @f: pointer to a function used to format the name
 *
 * This function takes a name and a formatting function as arguments.
 * The name is passed to the formatting function, which formats the name
 * according to whatever rules it specifies. The formatted name is
 * then printed to stdout.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
