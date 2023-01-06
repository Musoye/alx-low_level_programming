#include "hash_tables.h"

/**
 * hash_table_print - print key value pair in hash tables
 * @ht: the hash table
 * Return: null
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *elem;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (flag == 1)
			{
				printf(", ");
			}
			elem = ht->array[i];
			while (elem != NULL)
			{
				printf("%s: %s", elem->key, elem->value);
				elem = elem->next;
				if (elem != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
