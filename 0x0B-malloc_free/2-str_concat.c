#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: on success, returns pointer to the allocated space in memory
 * terminates if it returns NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	concat_str = malloc(len1 + len2 + 1);
	if (concat_str == NULL)
	{
		return (NULL);
	}
	memcpy(concat_str, s1, len1);
	memcpy(concat_str + len1, s2, len2 + 1);
	return (concat_str);
}

