#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to hash table
 * @key: element whose value is to be retrieved
 *
 * Return: value of key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hashcode;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	hashcode = key_index((const unsigned char *)key, ht->size);

	while (ht->array[hashcode] != NULL)
	{
		if (strcmp(ht->array[hashcode]->key, key) == 0)
			return (ht->array[hashcode]->value);
		ht->array[hashcode] = ht->array[hashcode]->next;
	}
	return (NULL);
}
