#include "main.h"

/**
 * print_times_table - prints the n times table, starting from 0
 * @n: the number of times for the table
 *
 * Return: void (nothing)
 */
void print_times_table(int n)
{
	if (n >= 0 && n < 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				int m = i * j;

				if (m <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
				else if (m > 9 && m < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((m / 100) + '0');
					_putchar((m / 10 % 10) + '0');
					_putchar((m % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
