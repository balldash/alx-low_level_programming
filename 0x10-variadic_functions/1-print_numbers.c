#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: an input string to be printed between numbers
 * @n: number of parameters
 * @...: other parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int nums;

	va_start(ap, n);
	for (; i < n; i++)
	{
		nums = va_arg(ap, int);
		print("%d", nums);
		if (seperator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
