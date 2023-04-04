#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: pointer to head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 on success, (-1) on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node, *current;
	unsigned int i = 1;

	if (*head == NULL) /* handle empty list */
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
	}
	else
	{
		while (i < index)
		{
			current = current->next;
			if (current == NULL)
				return (-1);
			i++;
		}
		del_node = current;
		del_node = del_node->next;
		current->next = del_node->next;
		free(del_node);
	}
	return (1);
}
