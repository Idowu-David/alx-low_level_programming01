#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value with an associated key
 * @ht: pointer to the hash table
 * @key: key to be found
 * Return: the the value associated with the element or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	char *value;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (strcmp((ptr->key), key) != 0)
		ptr = ptr->next;
	if (ptr == NULL) /* key not found */
		return ("(null)");
	value = strdup(ptr->value);
	if (value == NULL)
		value = "(null)";
	return (value);
}
