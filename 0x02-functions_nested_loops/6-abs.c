#include "main.h"
/**
 * _abs -  computes the absolute value of an integer
 * @n: takes an integer
 * Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
