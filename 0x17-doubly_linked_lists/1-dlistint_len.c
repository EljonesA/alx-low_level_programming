#include "lists.h"

/**
 * dlistint_len - get number of elements in a d linked list
 * @h: head of the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		num_of_elements++;
	}

	return (num_of_elements);
}
