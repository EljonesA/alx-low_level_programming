#include "lists.h"

/**
 * print_dlistint - prints elements of a doubly linked list
 * @h: head of the list pointer
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
