#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: point to first node
 * @n: point to current node
 * Return: address if successful and NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new;
	listint_t *add_last = *head;

	add_new = (listint_t *)malloc(sizeof(listint_t));
	if (add_new == NULL)
	{
		return (NULL);
	}
	add_new->n = n;
	add_new->next = NULL;
	add_last = *head;

	if (add_last == NULL)
		*head = add_new;
	else
	{
		while (add_last->next != NULL)
		add_last = add_last->next;
		add_last->next = add_new;
	}

	return (*head);
}
