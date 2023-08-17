#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a list
 * @head: header to list
 * @n: data for the new node
 *
 * Return: address of new element, NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (head == NULL) /* empty list */
		return (NULL);

	if (new_node == NULL) /* handle memery allocation failure */
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL) /* if list not empty */
		(*head)->prev = new_node;
	*head = new_node; /* make the new node the head */

	return (new_node);
}
