#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: point to file created
 * @text_content: string to write file
 * Return: 1 success -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, t,  txt;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (txt = 0; text_content[txt];)
			txt++;
	}

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	t = write(i, text_content, txt);
	if (i == -1)
		return (-1);
	if (t == -1)
		return (-1);
	close(i);

	return (1);
}
