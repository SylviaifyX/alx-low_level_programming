#include "main.h"

/**
 * reverse_array -function that reverses the content of an array of integer
 *@a: pointer to int array
 *@n: is the number of element to swap
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, b, c;

	b = 0;
	c = n - 1;
	while (b < c)
	{
		i = a[b];
		a[b] = a[c];
		a[c] = i;
		b++;
		c--;
	}
}


