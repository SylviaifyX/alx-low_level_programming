#include "main.h"
/**
 *string_toupper - function to convert from lowercase to uppercase
 *@str: the string to convert
 *
 * Return: pointer to modify
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}


