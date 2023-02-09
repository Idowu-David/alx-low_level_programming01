#include "hash_tables.h"

/**
 * hash_table_pront - prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *ptr;
	unsigned long int i;
	hash_node_t *node;

	ptr = ht;
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ptr->size; i++)
	{
		node = ptr->array[i];
		if (node == NULL)
			continue;
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (i != (ptr->size - 1))
				printf(", ");
			else if (i == ptr->size - 1)
			{
				if (node->next != NULL)
					printf(", ");
			}
			node = node->next;
		}
	}
	printf("}\n");
}
