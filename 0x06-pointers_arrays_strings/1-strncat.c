#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *holder = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;
	if (n > srclen)
		n = srclen;
	src = start;
	for (; i < n; i++)
		*dest++ = *src++;
	*dest = '\0';
	return (holder);
}
