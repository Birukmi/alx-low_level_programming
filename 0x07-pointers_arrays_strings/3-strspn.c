#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: main string
 * @accept: prefix substring
 * Return: return
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;
	char *s1, *s2;

	s1 = s;
	s2 = accept;

	count = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s2[j] == s1[i])
			{
				count++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}
	return (count);
}
