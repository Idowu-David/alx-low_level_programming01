#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *ptr, *temp;

	if (ht == NULL)
		return;
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			temp = ptr = ht->array[index];
			while (ptr != NULL)
			{
				ptr = ptr->next;
				free(temp->key);
				free(temp->value);
				temp->next = NULL;
				free(temp);
				temp = ptr;
			}
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
