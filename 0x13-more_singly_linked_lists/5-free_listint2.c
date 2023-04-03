#include "lists.h"

/**
 * free_listint2 - free listint_t list and sets head to NULL
 * @head: pointer to the listint_t list
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_next;

	if (head == NULL)
		return;

	temp_next = *head;
	while (*head != NULL)
	{
		temp_next = *head;
		(*head) = (*head)->next;
		free(temp_next);
	}
	*head = NULL;
}
