#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that prints all element of a list
 * @h: points to the next code
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counting = 1;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counting++;
	}
	printf("%d\n", h->n);

	return (counting);
}

