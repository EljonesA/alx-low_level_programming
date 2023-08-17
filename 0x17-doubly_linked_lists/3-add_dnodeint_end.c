#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: pointer to first node of the list
 * @n: data value for the new node
 *
 * Return: address of new element, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new_node == NULL) /* malloc memory allocation failed */
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL) /* if list empty, make new_node head */
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL) /* move to the last node */
		current = current->next;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}

