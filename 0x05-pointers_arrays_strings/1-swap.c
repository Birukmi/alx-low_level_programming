#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: the first integer
 * @b: the seconfd integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
