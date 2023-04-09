#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: point bit
 * @index: index start 0
 * Return: 1 success -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
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
		*n = *n & ~b;
	}
	return (1);
}

