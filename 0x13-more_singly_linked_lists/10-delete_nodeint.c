#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: the head of the list
 * @index: the index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	prev = NULL;
	i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (-1);
		}

		prev = current;
		current = current->next;
		i++;
	}

	return (-1);
}

