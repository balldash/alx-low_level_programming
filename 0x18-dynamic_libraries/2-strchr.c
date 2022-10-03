#include "main.h"
#define NULL 0

/**
 * _strchr - a function that locates a character in a string
 * @s: string to search
 * @c: target character
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
