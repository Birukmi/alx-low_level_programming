#include <stdio.h>
/**
 * main- entry point
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	int i;
	int j;

	for(i = 48; i < 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}

	putchar('\n');
	return (0);
}
