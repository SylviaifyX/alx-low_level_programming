#include "main.h"
/**
 * print_numbers - function that prints the number 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
		char a;
	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
		_putchar('\n');
}
