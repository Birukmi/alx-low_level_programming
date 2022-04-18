#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int half;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	half = (i + 1) / 2;
	for (i = half; str[i]; i++)
	{
		_putchar (str[i]);
	}
	_putchar('\n');
}
