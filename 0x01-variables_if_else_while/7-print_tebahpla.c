#include <stdio.h>
/**
 * main- entry point
 * Return: 0  for success execution
 */
int main(void)
{
	char alpha;

	for(alpha = 'Z'; alpha >= 'A'; alpha--)
	{
		printf("%c", alpha);
	}

	printf("\n");
	return (0);
}
