#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: point to file created
 * @text_content: string to write file
 * Return: 1 success -1 failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int i, t, txt = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	i = open(filename, O_WRONLY | O_APPEND);
	t = write(i, text_content, txt);

	if (i == -1)
		return (-1);
	if (t == -1)
		return (-1);

	close(i);
	return (1);
}
