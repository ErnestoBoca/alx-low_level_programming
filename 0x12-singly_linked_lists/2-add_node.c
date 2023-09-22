#include "lists.h"
/**
 * add_node - adds a node to the beggining of the list
 * @head: the pointer to the first node
 * @str: the string to inserted into the node
 * Return the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}


/**
 * _strlen - calculates the length of a string.
 * @str: the pointer to the string
 * Return: the length of a string.
 */
int _strlen(const char *str)
{
	size_t length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
