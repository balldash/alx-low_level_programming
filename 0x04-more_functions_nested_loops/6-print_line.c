#include "main.h"

/**
 * print_line = draws a straight line in the terminal
 * @n: the number of times to draw the line
 */
void print_line(int n)
{
	int i;

	if (n =< 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
