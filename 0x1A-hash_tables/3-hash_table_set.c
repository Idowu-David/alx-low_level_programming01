#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table that it's key wants to be added or updated
 * @key: key
 * @value: value associated with the key.
 *
 * Return: returns 1, if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned int index;
	char *Null = "";

	if (key == NULL || key == Null || value == NULL || ht == NULL || *key == '\0')
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL) /* if index is empty */
		ht->array[index] = node;
	else	/* add new node at the beginning of the linked list */
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
