#include "lists.h"
/**
 * get_size - returns the size of a linked list
 * @head: the head of the list
 * Return: Nothing
 */
size_t get_size(dlistint_t *head)
{
	size_t size = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}

	return (size);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the head of the list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: the data of the node
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	size_t i = 0;

	if (idx >= get_size(*h))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == get_size(*h) - 1)
		return (add_dnodeint_end(h, n));
	if (idx < get_size(*h))
	{
		temp = *h;
		while (i < idx - 1)
		{
			temp = temp->next;
			i++;
		}

		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = temp;
		new->next = temp->next;
		temp->next = new;
		new->next->prev = new;

		return (new);
	}

	return (NULL);
}
