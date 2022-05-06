#include "main.h"
/**
 * _calloc -allocated memoria for nmeb elemn de zise bytes
 * @nmemb: number of element in the array
 * @size: bytes for each position
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	i = malloc(nmemb * size);
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < nmemb * size; j++)
	{
		i[j] = 0;
	}
	return (i);
}
