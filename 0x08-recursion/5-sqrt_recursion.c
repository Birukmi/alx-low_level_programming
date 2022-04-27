#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integr number
 * Return: return sqrt_recursion function value
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_evaluate(i, n));
	}
}
/**
 * _evaluate - evaluate _sqrt function
 * @i: integer value
 * @n: integer value
 * Return: return sqrt function value
 */
int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (i * i < n)
	{
		return (_evaluate(i + 1, n));
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (-1);
}
