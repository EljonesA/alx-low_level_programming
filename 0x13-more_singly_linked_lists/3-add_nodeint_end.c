#include "lists.h"

/**
 * add_nodeint_end - add node to end of the list
 * @head: current list
 * @n: data value for the new node
 *
 * Return: address of new node, NULL on failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	/* If current list is empty, make new node head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else /* traverse through list till last node */
	{
		listint_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		return (new_node);
	}
}
