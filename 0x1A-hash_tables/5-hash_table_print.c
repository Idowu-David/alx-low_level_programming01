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
	printf("There are %d nodes\n", count);
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
					i++;
					if (i < count)
						printf(", ");
					ptr = ptr->next;
				}
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
	hash_node_t *ptr;

	for (index = 0; index < (int)ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			ptr = ht->array[index];
			while (ptr != NULL)
			{
				node++;
				ptr = ptr->next;
			}
		}
			
	}
	return (node);
}
