#include <stdio.h>
/**
 * main- entry point
 *
 * Return: 0 after Execution
 */
int main(void)
{
	char lower;
	char upper;
	
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for(upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}

	putchar('\n');
	return (0);
}
