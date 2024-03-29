#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of string passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list check;
	unsigned int i;
	char *str;

	va_start(check, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(check, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(check);
	printf("\n");
}
