#include <stdio.h>
/**
 * main- entry point
 *
 * Return: 0 after execution
 */
int main(void)
{
	char alpha;

	for (char = 'a'; alpha <= 'z'; alpha++)
	{
		if(alpha == 'q')
			continue;

		else if (alpha == 'e')
			continue;

		putchar(alpha);
	}

	putchar('\n');
	return (0);
}


