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
	hash_node_t *elem;

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	elem = ht->array[index];
	while (elem && strcmp(elem->key, key) != 0)
	{
		elem = elem->next;
	}
	if (elem == NULL)
	{
		return (NULL);
	}
	return (elem->value);
}
