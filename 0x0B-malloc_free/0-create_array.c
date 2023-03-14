#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars, and initialize it with a char
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 * Return: Null if size is 0, a pointer to the array otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i - 0; i < size; i++)
		str[i] = c;
	return (str);
}
