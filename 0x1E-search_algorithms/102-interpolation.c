#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}

	pos = low + (((double)(high - low) / (array[high] - array[low]))
	* (value - array[low]));
	if (pos >= size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	if (array[pos] < value)
		low = pos + 1;
	else
		high = pos - 1;
	}
	return (-1);
}
