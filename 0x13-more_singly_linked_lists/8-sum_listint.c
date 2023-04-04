#include "lists.h"

/**
 * sum_listint - sums all data of a list
 * @head: pointer to head of the list
 *
 * Return: sum of all data(n) of the list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
