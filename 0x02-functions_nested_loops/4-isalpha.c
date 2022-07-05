#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if a char is alphabetic
 * @c: The char to check
 *
 * Return: 1 if is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	int check;

	if (isalpha(c) == 0)
		check = 0;
	else
		check = 1;
	return (check);
}
