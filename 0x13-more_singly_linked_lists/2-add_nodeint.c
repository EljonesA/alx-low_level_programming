#include "lists.h"

/**
 * add_nodeint - adds new node to beginning of a list
 * @head: pointer to first node in the list
 * @n: data integer
 *
 * Return: address of the element, NULL on failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
