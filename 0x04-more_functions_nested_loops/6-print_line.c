#include "main.h"
/**
 * print_line - draws a straight line
 * @n: print int
 * Return: Always 0
 */
void print_line(int n)
{

	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			putchar (95);
		}

		putchar ('\n');
	}

	else
	{
		putchar ('\n');
	}
}
