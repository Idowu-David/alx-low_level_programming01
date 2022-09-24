#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned int index = 0;
	int count, i = 0;

	count = count_nodes(ht);
	printf("{");
	if (ht != NULL)
	{
		while (index < ht->size)
		{
			if (ht->array[index] != NULL)
			{
				ptr = ht->array[index];
				while (ptr != NULL)
				{
					printf("'%s': '%s'", ptr->key, ptr->value);
					ptr = ptr->next;
				}

			i++;
			if (i < count)
				printf(", ");
			}
			index++;
		}
	}
	printf("}\n");
}

/**
 * count_nodes - counts the number of nodes in the hash table
 * @ht: hash node
 * Return: the number of nodes
 */
int count_nodes(const hash_table_t *ht)
{
	int node = 0, index;

	for (index = 0; index < (int)ht->size; index++)
	{
		if (ht->array[index] != NULL)
			node++;
	}
	return (node);
}
