#include "main.h"

/**
 * binary_to_uint - converts from binary to unsigned int
 * @b: A pointer to the string of chars to converst
 * Return: the converted resuls
 */

unsigned int binary_to_uint(const char *b)
{
	singed int i = 0, n = 0;

	if (!b)
		return (0);

	while (b[i] ! '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		n <<= 1;

		if (b[i] & 1)
			n += 1;
		i += 1;
	}
	return (n);
}
