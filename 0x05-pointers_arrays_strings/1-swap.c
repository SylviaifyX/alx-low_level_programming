#include <stdio.h>
#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 *
 * @a: = variable 1
 * @b: = variable 2
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int ef;

	ef = *a;
	*a = *b;
	*b = ef;
}
