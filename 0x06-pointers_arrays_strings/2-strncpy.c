#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of characters to copy
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *holder = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	srclen++;

	if (n > srclen)
		n = srclen;
	src = start;

	for (; i < n; i++)
		*dest++ = *src++;
	return (holder);
}
