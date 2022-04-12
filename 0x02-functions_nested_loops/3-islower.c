#include "main.h"
/**
 * _islower - returns 1 for lowercase alphabet, other wise returns 0
 * @c: takes a character
 * Return: return 1 for lower case: return 0 for uppercase
 */
int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
