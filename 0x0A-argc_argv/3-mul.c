#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
