#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add a new node at the end of a list
 * @head: head of the list
 * @str: string to be used as str value for the new node
 * Return: pointer to new node, NULL on failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int length;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[length])
		length++;

	new_node->str = strdup(str);
	new_node->len = length;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
