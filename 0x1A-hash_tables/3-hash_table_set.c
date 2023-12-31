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
	hash_node_t *node, *temp;

	if (ht == NULL || ht->array == NULL || key == NULL || strcmp(key, "") == 0
			|| ht->size  == 0 || strlen(key) == 0 || value == NULL)
		return (0);
	hashcode = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[hashcode];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			hash_table_update(ht, hashcode, value);
		temp = temp->next;
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
	char *new_value;

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
	free(ht->array[hashcode]->value);
	ht->array[hashcode]->value = new_value;
	if (ht->array[hashcode]->value == NULL)
		return (0);
	return (1);
}
