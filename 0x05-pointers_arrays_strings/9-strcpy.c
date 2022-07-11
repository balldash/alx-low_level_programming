#include "main.h"

/**
 * *_strcopy - copies the string pointed to by src
 * including the terminating null bype
 * to the buffer pointed to by dest
 * Return: the pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	char *holder = dest;

	while (*src)
		*dest++ = *src++;
	return (holder);
}
