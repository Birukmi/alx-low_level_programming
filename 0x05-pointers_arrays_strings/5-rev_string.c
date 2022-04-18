#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *start_p, *end_p, c;
	int i, count, size;

	size = 0;
	for (i = 0; s[i]; i++)
	{
		size++;
	}
	count = size;
	start_p = s;
	end_p = s;

	for (i = 0; i < count - 1; i++)
	{
		end_p++;
	}
	for (i = 0; i < count / 2; i++)
	{
		c = *end_p;
		*end_p = *start_p;
		*start_p = c;		
		start_p++;
		end_p--;
	}
}
