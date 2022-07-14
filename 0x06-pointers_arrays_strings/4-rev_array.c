#include "main.h"

/**
 * reverse_array - a function that reverses
 * the content of an arrya of integers
 * @a: the array of integers
 * @n: the number of elements of array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int hold;

	while (i < n--)
	{
		hold = a[i];
		a[++] = a[n];
		a[n] = hold;
	}
}
