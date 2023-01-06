#include "hash_tables.h"

/**
 * key_index - get index for hash table
 * @key: the key to convert
 * @size: the size of the table
 * Return: the index gotten
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
