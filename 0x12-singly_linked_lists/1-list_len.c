#include "lists.h"
/**
 * list_len - prints all the elements of a list_t list.
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}

	return (count);
}
