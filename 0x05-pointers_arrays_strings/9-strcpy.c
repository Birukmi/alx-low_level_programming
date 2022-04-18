#include "main.h"
/**
 * _strcpy -  copies the string pointed to by src
 * @dest: the buffer pointed to
 * @src: the buffer to be copied
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';
	return (dest);
}
