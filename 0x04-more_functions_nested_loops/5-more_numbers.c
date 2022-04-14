#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int a;
	int b;
	int result;

	i = 0;
	result = 0;
	while (i < 10)
	{
		while (result <= 14)
		{
			if (result < 10)
			{
				b = result;
			}
			else
			{
				a = result / 10;
				b = result % 10;
				_putchar (a + '0');
			}

			_putchar (b + '0');

			result++;
		}
		i++;
		result = 0;
		_putchar ('\n');
	}
}
