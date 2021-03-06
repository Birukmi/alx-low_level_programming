#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *start, *end, m;
	int i;

	start = a;
	end = a;
	for (i = 0; i < n - 1; i++)
	{
		end++;
	}
	for (i = 0; i < n / 2; i++)
	{
		m = *end;
		*end = *start;
		*start = m;
		start++;
		end--;
	}
}
