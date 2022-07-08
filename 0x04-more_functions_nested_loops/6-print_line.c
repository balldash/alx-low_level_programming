#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times to draw the line
 * Return: nothing (void)
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
