#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list.
 * @h: the head of the list
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
