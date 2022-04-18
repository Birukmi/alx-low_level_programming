#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
/**
 */
int main(void)
{
	int i;
	char pass[20];
	srand((unsigned int)(time(NULL)));

	for (i = 0; i < 4; i++)
	{
		pass[i] = rand() % 9;
		char capLetter = 'A' + (rand() % 26);
		pass[i + 2] = capLetter;
		char letter = 'a' + (rand() % 26);
		pass[i + 3] = letter;
		printf("%d%c%c", pass[i], pass[i + 2], pass[i + 3]);
	}
	printf("\n\n");
}
