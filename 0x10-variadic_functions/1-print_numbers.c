#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers, followed by a new line
 * @separator: string to print number
 * @n: number of integers passed to the function
 * Return: NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list check;
	unsigned int i;

	va_start(check, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(check, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(check);
	printf("\n");
}
