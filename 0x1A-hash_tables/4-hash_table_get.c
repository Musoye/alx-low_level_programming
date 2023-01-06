#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: the value or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index]->key || ht->array[index]->value)
	{
		return (ht->array[index]->value);
	}
	return (NULL);
}
