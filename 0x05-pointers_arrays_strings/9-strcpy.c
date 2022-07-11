#include "main.h"

/**
 * *_strcopy - copies the string pointed to by src
 * including the terminating null bype
 * to the buffer pointed to by dest
 * Return: the pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}
	
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}
