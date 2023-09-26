#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: a pointer to the head of the list
 * @n: the int element
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;
	newnode->n = n;
	*head = newnode;

	return (newnode);
}
