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
	int i = 0, txt;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;

	txt = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	write(i, text_content, txt);
	if (i == -1)
		return (-1);

	close(txt);

	return (1);
}
