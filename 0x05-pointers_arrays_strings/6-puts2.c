# include <stdio.h>
#include "main.h"
/**
 * puts2 - functions that print every other character of aa string starting
 * with a first line
 * @str: string parameter input
 * Return - nothing
 */
void puts2(char *str)
{
		int i;

		for (i = 0; str[i] != '\0'; ++i)
		{
		if (i % 2 == 0)
			putchar(str[i]);
		}
			putchar('\n');
}
