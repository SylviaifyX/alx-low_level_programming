#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: points to string containing the binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int c;

	if (!b)
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
		{
			return (0);
		}
		val = 2 * val + (b[c] - '0');
	}
	return (val);
}
