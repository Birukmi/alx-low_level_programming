#include <stdio.h>
#include <time.h>
#include "main.h"
#include <stdlib.h>
int main(void)
{
	int i;

	srand(time(0));
	i = rand();
	printf("%i\n", i);
	return (0);
}
