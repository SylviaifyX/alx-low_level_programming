#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: points to the string to be concatinated
 * @src: to be appended to dest
 *
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_l = 0;

	while (dest[i++])
	{
		dest_l++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dest_l++] = src[i];
	}
	return (dest);
}
