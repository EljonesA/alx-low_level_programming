#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a list
 * @h: the list
 *
 * Return: number of odes in the list.
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next; /* move to next node in the list */
		nodes++;
	}
	return (nodes);
}
