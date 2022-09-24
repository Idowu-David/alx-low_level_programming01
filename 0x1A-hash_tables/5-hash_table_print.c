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
                printf("'%s': '%s'", ptr->key, ptr->value);
                i++;
                if (i < count)
                    printf(", ");
            }
            index++;
        }
    }
    printf("}\n");
}

int check_for_another_node(unsigned int index, const hash_table_t *ht)
{
   while (ht->array[index] == NULL)
   {
        if (index < ht->size)
            index++;
        else
        {
            return (0);
        }
   }
   return (1);
}

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