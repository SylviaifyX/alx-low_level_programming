#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: the string to search
 * @accept: the bytes to search for
 * Return:  pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = s;

	while (*p != '\0')
	{
		char *q = accept;

		while (*q != '\0')
		{
			if (*p == *q)
			{
				return (p);
			}
			q++;
		}
		p++;
	}
	return ('\0');
}
