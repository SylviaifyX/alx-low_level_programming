#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function return number to bit flip from one to another
 * @n: number to flipped
 * @m: number to flip to
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b;
	unsigned long int c = 0;

	b = n ^ m;

	while (b != 0)
	{
		c += b & 1;
		b = b >> 1;
	}

	return (c);
}

