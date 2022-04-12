#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: takes a character
 *
 * Return: return 1 for letter, lowwrcase and uppercase: o other wise
 */
int _isalpha(int c)
{
	if ((c >= 'A') && (c <= 'Z') || (c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
