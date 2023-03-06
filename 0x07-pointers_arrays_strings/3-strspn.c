#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: pointer to the string to search for the prefix substring
 * @accept: pointer to the string containing the characters that should be
 * considered part of the prefix substring
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, j, find;

	for (i = 0; s[i] != '\0'; i++)
	{
		find = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				find = 1;
				break;
			}
		}
		if (find == 0)
		{
			break;
		}
		length++;
	}
	return (length);
}
