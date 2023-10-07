#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int status = 1;

	if (ht == NULL || ht->size == 0)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			status == 0 ? printf(", ") : status;
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			status = 0;
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
