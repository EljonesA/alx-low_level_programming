#include "hash_tables.h"

/**
 * hash_table_get - retrieves value for a given key
 * @ht: hash table to look into
 * @key: key we are looking for
 *
 * Return: value, NULL if value not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);

	/* calculate index using key */
	index = key_index((const unsigned char *)key, ht->size);

	/* traverse linked list to calculated index */
	item = ht->array[index];
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value); /* key found, return value */
		item = item->next;
	}

	return (NULL); /* key not found */
}
