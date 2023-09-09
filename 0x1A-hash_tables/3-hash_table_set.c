#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: yhe hash table to add/update to
 * @key: key to insert
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item = NULL; /* create new item */
	hash_node_t *temp = NULL;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	/* check if key exists */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			char *new_value = strdup(value); /* duplicate */

			if (new_value == NULL)
				return (0);

			/* free oldvalue and set new one */
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}

	/* if key doesn't exist, create new node */
	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
		return (0);

	/* duplicate both key & value */
	new_item->key = strdup(key);
	new_item->value = strdup(value);

	/* handle collision by adding new node at the beginning of the list */
	new_item->next = ht->array[index];
	ht->array[index] = new_item;

	return (1);

}
