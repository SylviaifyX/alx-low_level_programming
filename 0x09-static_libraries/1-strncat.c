#include "main.h"
/**
*_strncat - function that concatenates two strings
* @dest: string is appended upon
* @src: appends to dest
* @n: appends to src
*
* Return: returns to string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_l = 0;

	while (dest[i++])
	{
		dest_l++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[dest_l++] = src[i];
	}
	return (dest);
}
