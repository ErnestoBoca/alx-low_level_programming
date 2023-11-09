#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head of the list
 * @index: the index of the node, starting from 0
 * Return:the nth node of the list
 * if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	size_t i = 0;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}

	return (NULL);
}
