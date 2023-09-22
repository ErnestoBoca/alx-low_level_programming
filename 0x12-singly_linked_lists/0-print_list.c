#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		printf("[%d] ", h->len);
		if (h->str != 0)
			printf("%s\n", h->str);
		else
			printf("(nil)\n");
		count++;
		h = h->next;
	}

	return (count);
}
