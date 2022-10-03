#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 *  @s: location to fill
 *  @b: char to fill location with
 *  @n: number of bytes to fill
 *  Return: returns pointer to location filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int size = n;

	if (size > 0)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
