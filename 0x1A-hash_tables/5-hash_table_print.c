#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, first = 1;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (first)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				first = 0;
			} else
				printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}
        }
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i]->next;
			while (temp != NULL)
			{
				if (first)
				{
					printf("'%s': '%s'", temp->key, temp->value);
					first = 0;
				} else
					printf(", '%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
