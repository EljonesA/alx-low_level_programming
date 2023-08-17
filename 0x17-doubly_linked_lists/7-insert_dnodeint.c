#include "lists.h"

/**
 * insert_dnodeint_at_index - inserst new node at specified index
 * @h: pointer to head of the list
 * @idx: index to insert the new node
 * @n: data for the new node
 *
 * Return: address of the new node, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int current_index = 0;
	dlistint_t *current = *h;

	if (h == NULL)
		return (NULL);

	if (new_node == NULL) /* handle malloc mem allocation failure */
		return (NULL);

	/* create the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (current != NULL && current_index < idx) /* move to specific idx */
	{
		current = current->next;
		current_index++;
	}
	if (current == NULL && current_index < idx) /* index out of bound */
	{
		free(new_node);
		return (NULL);
	}

	/* insert the new node */
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
