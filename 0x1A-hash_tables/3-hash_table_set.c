#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: pointer to hash table
 * @key: key of element to be added
 * @value: value of element to be added
 *
 * Return: 1 if successful, else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hashcode;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	hashcode = key_index((const unsigned char *)key, ht->size);
	while (ht->array[hashcode] != NULL)
	{
		if (strcmp(ht->array[hashcode]->key, key) == 0)
			hash_table_update(ht, hashcode, value);
		ht->array[hashcode] = ht->array[hashcode]->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->key = (char *)key;
	node->next = NULL;
	if (ht->array[hashcode] == NULL)
		ht->array[hashcode] = node;
	else
	{
		node->next = ht->array[hashcode];
		ht->array[hashcode] = node;
	}
	return (1);
}

/**
 * hash_table_update - updats the value of n existing key in hash table
 *
 * @ht: pointer to hash table
 * @hashcode: hashcode of given key
 * @value: new value to be placed in existing key
 *
 * Return: 1 on success, 0 on failure
 */

int hash_table_update(hash_table_t *ht, unsigned long int hashcode,
		const char *value)
{
	ht->array[hashcode]->value = strdup(value);
	if (ht->array[hashcode]->value == NULL)
		return (0);
	return (1);
}
