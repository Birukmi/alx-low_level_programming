#include "main.h"
/**
 * is_prime_number - evaluate prime or not
 * @num: integer no
 * Return: reteurn the value of the function
 */
int is_prime_number(int num)
{
	int i;

	i = 2;
	if (num < 2)
	{
		return (0);
	}
	if (num == 2)
	{
		return (1);
	}
	return (evaluate(num, i));
}
/**
 * evaluate - evaluate number
 * @num: integer value
 * @i: integer
 * Return: return evaluate function value
 */
int evaluate(int num, int i)
{
	if (i == num - 1)
	{
		return (1);
	}
	else if (num % i == 0)
	{
		return (0);
	}
	if (num % i != 0)
	{
		return (evaluate(num, i + 1));
	}
	return (0);
}
