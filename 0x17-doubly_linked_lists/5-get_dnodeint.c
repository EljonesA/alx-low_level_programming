#include "lists.h"

/**
 * get_dnodeint_at_index - finds element at a given index
 * @head: pointer to head of the list
 * @index: position of node to retrieve
 *
 * Return: node at given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (head != NULL && current_index < index)
	{
		head = head->next;
		current_index++;
	}

	return (head);
}
