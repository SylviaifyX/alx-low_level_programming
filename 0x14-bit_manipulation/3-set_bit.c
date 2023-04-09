#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 * @n: points to bit
 * @index: starts from 0
 * Return: 1 success and -1 error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int b;
	int i;

	if (index > 64)
	{
		return (-1);
	}
	for (i = 0; i < 64; i++)
	{
		b = 1 << index;
		*n = *n | b;
	}
	return (1);
}
