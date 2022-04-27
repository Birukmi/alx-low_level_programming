#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer of string
 * Return: 0 or strlen_recursion value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
