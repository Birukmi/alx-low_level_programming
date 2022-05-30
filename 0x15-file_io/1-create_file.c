#include "main.h"
/**
 * create_file - to create a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int file1, fwrite, i;

	if (filename == NULL)
	{
		return (-1);
	}
	file1 = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file1 == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		{
			;
		}
		fwrite = write(file1, text_content, i);
		if (fwrite == -1)
		{
			return (-1);
		}
	}
	close(file1);
	return (1);
}
