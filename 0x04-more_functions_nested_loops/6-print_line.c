#include "main.h"

/**
 * print_line = draws a straight line in the terminal
 * Return: nothing (void)
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
