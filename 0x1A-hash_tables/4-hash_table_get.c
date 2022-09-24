#include "hash_tables.h"
/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: hash table
 * @key: key to find
 * Return: value associated with the element or NULL if key
 * couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *ptr;
	char *value;

	if (key == NULL || ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		value = NULL;
	else
	{
		ptr = ht->array[index];
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, key) == 0)
			{
				value = ptr->value;
			}
			ptr = ptr->next;
		}
	}
	return (value);
}
