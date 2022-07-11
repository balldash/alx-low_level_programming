#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string input
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char holder;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		holder = s[i];
		s[i++] = s[len];
		s[len] = holder;
	}
}
