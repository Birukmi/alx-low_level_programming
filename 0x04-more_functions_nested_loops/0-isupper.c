#include <"main.h"

/**
 * _isupper - checks for uppercase character
 * @c: input character
 *
 * Return: return 1 for uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
