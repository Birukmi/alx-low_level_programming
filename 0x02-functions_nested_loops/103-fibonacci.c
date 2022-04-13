#include <stdio.h>

/**
 * main - entry point
 *
 * REturn: always 0
 */
int main(void)
{
	int i;
	unsigned long x = 0, y = 1, sum;

	for (i = 0; i <= 50; i++)
	{
		sum = x + y;
		printf("%ld", sum);

		x = y;
		y = sum;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(",");
		}
	}

		return (0);
}
