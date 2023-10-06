#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of hash table to be created
 *
 * Return: a hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	/*
	 * Allocate memory for the hash table struct
	 */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	/*
	 * Allocate memory for the pointer to the hash_node struct
	 * required for the given array size
	 */
	hash_table->array = malloc(sizeof(hash_node_t **) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/*
	 * initialize each array index to NULL
	 */
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	hash_table->size = size;
	return (hash_table);
}
