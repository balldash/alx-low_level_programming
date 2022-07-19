#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum
 * of the two diagonals of a square matrix
 * @a: the matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int diagonal_sum_1 = 0;
	int diagonal_sum_2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonal_sum_1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagonal_sum_2 += a[i];
	}

	printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);
}
