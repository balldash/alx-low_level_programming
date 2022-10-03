#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: An input character
 * Return: true if c is uppercase or false otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
