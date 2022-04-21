#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: A pointer to a character
 * @s2: A pointer to a character
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	char *first = s1;
	char *second = s2;

	while (*first != '\0' && *second != '\0' && *first == *second)
	{
		first++;
		second++;
	}
	return (*first - *second);
}
