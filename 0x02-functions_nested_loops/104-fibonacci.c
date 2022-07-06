#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j = 1, k = 2, m = j + k, n = m;

	printf("%ld, %ld, ", j, k);

	for (i = 2; i < 98; i++)
	{
		if (i == 97)
			printf("%ld\n", n);
		else
			printf("%ld, ", n);
		n = m + k;
		k = m;
		m = n;

	}
	return (0);
}
