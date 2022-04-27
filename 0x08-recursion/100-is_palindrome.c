#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: a pinter string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pali(s, len - 1));
}
/**
 * _strlen_recursion - length
 * @s: pointer string
 * Return: return strlen function value
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
/**
 * pali - checking palindrom
 * @s: string pointer
 * @i: place
 * Return: value
 */
int pali(char *s, int i)
{
	if (i < 1)
	{
		return (1);
	}
	if (*s == *(s + i))
	{
		return (pali(s + 1, i - 2));
	}
	return (0);
}
