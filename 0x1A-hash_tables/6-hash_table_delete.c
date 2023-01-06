#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: the hashtable
 * Return: null
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *table = ht;
	hash_node_t *new, *tmp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			new = ht->array[i];
			while (new != NULL)
			{
				tmp = new->next;
				free(new->key);
				free(new->value);
				free(new);
				new = tmp;
			}
		}
	}
	free(table->array);
	free(table);

}
