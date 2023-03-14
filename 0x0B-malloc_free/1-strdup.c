#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string is duplicated
* Return: success when pointer is duplicated to string. it returns
* NULL if insufficient memory if str is NULL
*/

char *_strdup(char *str)
{
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}
	dup_str = (char *)malloc(strlen(str) + 1);
	if (dup_str == NULL)
	{
		return (NULL);
	}
	strcpy(dup_str, str);
	return (dup_str);
}

