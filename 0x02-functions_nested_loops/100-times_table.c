#include "main.h"

/**
 * print_times_table - prints the n times table, starting from 0
 * @n: the number of times for the table
 *
 * Return: void (nothing)
 */
void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int m = i * j;

				if ((m / 10) == 0)
				{
					if (j != 0)
						_putchar(' ');
					_putchar(m + '0');
					if (j == n)
						continue;
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					if (j == n)
						continue;
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
