#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 * Return: nothing (void)
 */
void more_numbers(void)
{
	int i = '1', j = '0';

	for (; i < 10; i++)
	{
		for (; j <= '15'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
