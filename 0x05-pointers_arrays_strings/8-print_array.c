#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 * followed by a new line
 * @a: the array input
 * @n: the integer input
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n);
}
