#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to the list
 *
 * Return: head node's data, 0 incase list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n; /* store head's data in variable n */
	temp = (*head); /* change current head to temp */
	(*head) = (*head)->next; /* make next node in the list the head */
	free(temp); /* delete temp */

	return (n);
}
