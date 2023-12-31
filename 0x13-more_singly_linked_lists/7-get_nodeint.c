#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a list
 * @head: the first element of the list
 * @index: the index of the element
 * Return: The node at that index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);

		temp = temp->next;
		i++;
	}

	return (NULL);
}
