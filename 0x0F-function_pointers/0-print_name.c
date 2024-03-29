#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name to print
 * @f: function to print name
 */

void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
