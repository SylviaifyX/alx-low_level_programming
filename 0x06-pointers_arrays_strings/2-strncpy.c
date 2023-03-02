#include "main.h"

/**
 *_strncpy - function that copies a string
 *@dest: store the string copy
 *@src: source string
 *@n: maximum number of byte to copy from src
 *
 * return: a pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_l = 0;

	while (src[i++])
	{
		src_l++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = src_l; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
