#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * s1: the first string to compare
 * s2: the second string to compare
 * Return: the difference of s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
