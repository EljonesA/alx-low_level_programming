#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to be printed
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int printed = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *item = ht->array[i];

		while (item != NULL)
		{
			if (printed)
				printf(", "); /* for multiple elements */

			printf("'%s': '%s'", item->key, item->value);
			printed = 1;
			item = item->next;
		}
	}
	printf("}\n");
}
