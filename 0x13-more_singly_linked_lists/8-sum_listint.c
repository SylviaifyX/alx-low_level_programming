#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Write a function that returns the sum of all the data
 * @head: point the first node
 * Return: return 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
