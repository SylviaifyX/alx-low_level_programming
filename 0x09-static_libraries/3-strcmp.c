#include "main.h"

/**
 *  _strcmp - funtion that compares two string
 *  @s1: pointer to first string
 *  @s2: pointer to the second
 *
 * Return: An integer greater or equal to or less than 0
 * according as the string s1 is greater or equal to
 * or less tha the string s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
