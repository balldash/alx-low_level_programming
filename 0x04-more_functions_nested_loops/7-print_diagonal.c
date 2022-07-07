#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times to draw the diagonal line
 * Return: nothing (void)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
