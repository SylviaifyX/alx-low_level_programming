#include "main.h"
/**
 * more_numbers - prints number from 0 to 9
 *
 * Return: void
 */
void more_numbers(void)
{
	char a, c;
	int i = 0;

	while (i < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			c = a;
			if (a > 9)
			{
				_putchar('1');
				c = a % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
		i++;
	}
}
