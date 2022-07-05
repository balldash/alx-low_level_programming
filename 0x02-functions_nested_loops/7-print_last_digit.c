#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be processed.
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int last = abs(n % 10);

	_putchar(last);
	return (last);
}
