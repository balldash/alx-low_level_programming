#include <ctype.h>
#include "main.h"

/**
 * _islower - checks if char is lowercase or uppercase.
 *
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	int check;

	if(islower(c) == 0)
		check = 0;
	else
		check = 1;
	return check;
}
