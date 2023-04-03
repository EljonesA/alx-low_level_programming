#include "lists.h"

/**
 * listint_len - keeps count of elements in a list
 * @h: the list
 *
 * Return: number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
