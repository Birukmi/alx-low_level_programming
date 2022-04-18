nclude "main.h"
/**
 * is_numerical - check if it is a digit
 * @n: Number
 * Return: If is a number, return 1 else return 0
 * _atoi - convert a string to an integer.
 * @s: string
 *
 * Return: always 0
 */
int is_numerical(unsigned int n)
{
	return (n >= '0' &&  n <= '9');
}
int _atoi(char *s)
{
	unsigned int num, i;
	int j;

	num = 0;
	j = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_numerical(s[i]))
		{
			num = (s[i] - 48) + num * 10;
			if (s[i + 1] == ' ')
			{
				break;
			}
		}
		else if(s[i] == '-')
		{
			j *= -1;
		}
	}
	return (num *j);
}
