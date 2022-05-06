#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: number of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
