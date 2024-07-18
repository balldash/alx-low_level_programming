#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array on integers
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, curr, i;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;
	curr = 0;

	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, curr);

	for (i = prev; i < size && i <= curr; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
