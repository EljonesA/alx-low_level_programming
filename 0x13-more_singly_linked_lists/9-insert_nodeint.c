#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at idx index
 * @head: pointer to head of the list
 * @idx: index to insert
 * @n: data value for the new node to insert
 *
 * Return: address of new node, NUll on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node; /* create new node */
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t)); /* allocate memory for the it */
	if (new_node == NULL) /* on allocation failure, */
		return (NULL);
	new_node->n = n; /* assign data to new node */
	new_node->next = NULL;
	/* Handle empty list */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Handle insertion at beginning of non-empty list */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (i < idx)
	{
		current = current->next;
		i++;
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
