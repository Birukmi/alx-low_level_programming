#include "main.h"
/**
 *  _strpbrk - searches a string for any of a set of bytes.
 *  @s: main string
 *  @accept: sub string
 *  Return: s that matches one of the bytes in acceptor null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
