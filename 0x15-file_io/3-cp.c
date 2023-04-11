#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes
 * @file: file to store in char.
 * Return: points to assigned buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = ((char *)malloc(sizeof(char) * 1024));

	if (buffer == NULL)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closed file.
 * @fd: The file descriptor closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
	}
}

/**
 * main - content to file
 * @argc: arguments 
 * @argv: array of pointers
 * Return: 0 success
 * Description: incorrect - exit code 97.
 * file does exist or cannot be read - exit code 98.
 * file cannot be created or written to - exit code 99.
 * file cannot be closed - exit code 100.
 */


int main(int argc, char *argv[])
{
	int From, To, a, b;
	char *buffer;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	buffer = create_buffer(argv[2]);
	From = open(argv[1], O_RDONLY);
	a = read(From, buffer, 1024);
	To = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (From == -1 || a == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	free(buffer);
	exit(98);
	}
	b = write(To, buffer, a);
	if (To == -1 || b == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	free(buffer);
	exit(99);
	}
	a = read(From, buffer, 1024);
	To = open(argv[2], O_WRONLY | O_APPEND);
	} while (a > 0);
	free(buffer);
	close_file(From);
	close_file(To);
	return (0);
}
