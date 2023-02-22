#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: the number to find the last digit from
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int pld;

	pld = (n % 10);
	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar (pld + '0');
		return (pld);
}