#include "main.h"
/**
 * jack_bauer - print starting from 00:00 to 23:59.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar (x / 10 + '0');
			_putchar (x % 10 + '0');
			_putchar (':');
			_putchar (y / 10 + '0');
			_putchar (y % 10 + '0');
			_putchar ('\n');
		}
	}
}
