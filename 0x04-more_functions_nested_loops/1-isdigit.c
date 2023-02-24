#include "main.h"
/**
 * _isdigit - function that checks the digit
 *
 * @c: c is a variable
 *
 * Return: 1 if its a digit and 0 if its otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c < '9')
	{
		return (1);
	} else
		return (0);
}
