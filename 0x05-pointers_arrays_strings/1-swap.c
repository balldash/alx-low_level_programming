#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first int to swap
 * @b: the second int to swap
 */
void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
