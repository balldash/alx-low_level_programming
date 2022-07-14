#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters
 * @s: the string input
 * Return: char pointer to converted string
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (start);
}
