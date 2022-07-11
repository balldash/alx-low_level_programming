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
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
