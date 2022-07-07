#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: The input character to check.
 * Return: 1 if input is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	int i;

	if (isupper(c) == 0)
		i = 0;
	else
		i = 1;
	return (i);
}
