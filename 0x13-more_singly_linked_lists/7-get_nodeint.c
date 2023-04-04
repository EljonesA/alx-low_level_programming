#include "lists.h"

/**
 * get_nodeint_at_index - search for nth node of a list
 * @head: pointer to the beginning of the list
 * @index: index to retrieve
 *
 * Return: nth node of the list, NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0; /* counter variable */

	if (head == NULL) /* in case list is empty, */
		return (NULL);

	while (i < index) /* traverse till nth node, where i == index */
	{
		head = head->next;
		i++;
	}
	if (i == index) /* if i = index, */
		return (head);
	else /* if index/node does not exist */
		return (NULL);

}
