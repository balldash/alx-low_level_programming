#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks for a digit between 0 and 9
 * @c: input integer
 * Return: 1 if input is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	if (isdigit(c) == 0)
		i = 0;
	else
		i = 1;
	return (i);
}
