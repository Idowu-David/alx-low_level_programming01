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
	hash_node_t *new_node;
	unsigned int index;
	char *Null = "";

	if (key == NULL || key == Null || value == NULL || ht == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL) /* if index is empty */
		ht->array[index] = new_node;
	else	/* add new node at the beginning of the linked list */
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
