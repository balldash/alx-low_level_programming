#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 * _strlen_recursion - a function to obtain the length of the string
 * @s: a string to calculate length
 * Return: the length of the string s
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - a function that checks if s is a palindrome
 * @s: the input string
 * Return: 1 if s is a palindrome or 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (helper_palindrome(s, len));
}

/**
 * helper_palindrome - a function with a reversed striing
 * @s: an input string
 * @len: the length of the string s
 * Return: a reversed s
 */

int helper_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == (s + len - 1))
		return (helper_palindrome(s + 1, len - 2));
	else
		return (0);
}
