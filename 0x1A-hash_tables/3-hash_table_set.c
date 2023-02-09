#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key to be stored
 * @value: value of the @key
 * Return: 1 if successful, 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (ht->array[index] != NULL)
		node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
