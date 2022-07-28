#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory
 * for an array using malloc
 * @nmemb: size
 * @size: size of the nmemb
 * Return: pointer to allocated space
 * or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
