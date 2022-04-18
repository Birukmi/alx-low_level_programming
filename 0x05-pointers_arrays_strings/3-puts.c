#include  "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str - sttring
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
	putchar(str[i]);
	i++;
	}
	putchar('\n');
}
