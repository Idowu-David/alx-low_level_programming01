#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *ptr;
    unsigned int i = 0, index = 0;

    if (ht != NULL)
    {
        printf("{");
        while (i < ht->size)
        {
            if (ht->array[index] != NULL)
            {
                ptr = ht->array[index];
                while (ptr != NULL)
                {
                    printf("'%s': '%s', ", ptr->key, ptr->value);
                    ptr = ptr->next;
                }
            }
            else
                continue;
            i++;
            index++;
        }
        printf("}");
    }
}