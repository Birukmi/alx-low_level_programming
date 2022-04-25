#include "main.h"
/**
 * _memcpy -  copies memory area
 * @dest: to be copied
 * @src: from it to be copied
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
