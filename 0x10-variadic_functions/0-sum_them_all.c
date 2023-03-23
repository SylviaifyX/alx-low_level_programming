#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arg passed to the function
 * Return: resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list check;
	unsigned int i;
	int sum = 0;

	va_start(check, n);
	for (i = 0; i <= n; i++)
	{
		sum += va_arg(check, int);
	}

	va_end(check);
	return (sum);
}
