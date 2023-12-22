#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table
 * @key: key is the key. key can not be an empty string
 * @value:  is the value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	unsigned long int index;

	if (ht == NULL || strcmp(key, "") == 0)
		return (0);
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = malloc(sizeof(char *));
	if (newnode->key == NULL)
		return (0);
	newnode->value = malloc(sizeof(char *));
	if (newnode->value == NULL)
		return (0);
	strcpy(newnode->key, key);
	strcpy(newnode->value, value);
	index = key_index((unsigned char *)key, ht->size);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);

}
