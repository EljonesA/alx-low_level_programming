#include "lists.h"

/**
 * sum_dlistint - sums data of all nodes
 * @head: pointer to head of the list
 *
 * Return: sum of all data, 0 if list empty
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result = result + head->n;
		head = head->next;
	}
	return (result);
}

