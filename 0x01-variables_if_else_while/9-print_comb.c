#include <stdio.h>
/**
 * main- entry point
 *
 * Return: 0 after successful execution
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	if (n == 57)
	{
		break;
	}
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
