#include "hash_tables.h"

/**
 * key_index - calculates index for a given key
 * @key: key
 * @size: size of the hash table array
 *
 * Return: index for he key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code = hash_djb2(key);
	unsigned long int index = hash_code % size;

	return (index);
}
