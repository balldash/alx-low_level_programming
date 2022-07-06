#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	uint64_t j = 1, k = 2, m = j + k, n = m;

	printf("%llu, %llu, ", j, k);

	for (i = 1; i < 97; i++)
	{
		if (i == 97)
			printf("%llu\n", n);
		else
			printf("%llu, ", n);
		n = m + k;
		k = m;
		m = n;

	}
	return (0);
}
