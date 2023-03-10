#include "main.h"
/**
 * _isupper - check if a character is uppercase
 *
 * @c: variable
 *
 * Return: 1 if true 0 false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
