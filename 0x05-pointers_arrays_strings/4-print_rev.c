#include <stdio.h>
#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 *
 * @s: reverse
 *
 * Return: 0;
 */

void print_rev(char *s)
{
	int a;
	int b;
	int i = 0;

		while (s[i] != '\0')
		{
			i++;
		}
		a = i;
		b = a - 1;
		while (b >= 0)
		{
		putchar(s[b]);
		b--;
		}
	putchar('\n');
}
