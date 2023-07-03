#include "main.h"
#include <stdio.h>
/**
 * set_string - sets value of a pointer to a char
 * @s: pointer to pointer to a char
 * @to: pointer to a char
 */

void set_string(char **s, char *to)
{
	if (s != NULL)
		*s = to;
}
