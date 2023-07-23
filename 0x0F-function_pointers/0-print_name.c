#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer to format name
 *
<<<<<<< HEAD
 * Return: void
=======
 * This function takes a name and a formatting function as arguments.
 * The name s passed to the formatting function, which formats the name
 * according to whatever rules it specifies. The formatted name is
 * then printed to stdout.
>>>>>>> 95bf06c921501aa17d8610cf28e083476f2cde14
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
