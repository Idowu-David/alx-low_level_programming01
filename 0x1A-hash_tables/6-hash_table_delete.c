#include "hash_tables.h"

/**
 * hash_table_delete - deletes an hash_table
 * @ht: hashtable
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *ptr = ht;
	unsigned long int i;
	hash_node_t *prev, *curr;
	if (ht == NULL)
		return;
	for (i = 0; i < ptr->size; i++)
	{
		while (curr != NULL)
		{
			prev = curr = ptr->array[i];
			curr = curr->next;
			free(prev->key);
			free(prev->value);
			prev->next = NULL;
			free(prev);
		}
	}
	free(ptr->array);
	free(ptr);
}
