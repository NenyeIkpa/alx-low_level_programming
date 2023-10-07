#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
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
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = malloc(sizeof(char *) * strlen(key));
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
	return (0);
}
