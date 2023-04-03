#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: pointer to the list
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *temp_next;

	while (head != NULL)
	{
		temp_next = head;
		head = head->next;
		free(temp_next);
	}
	free(head);
}
