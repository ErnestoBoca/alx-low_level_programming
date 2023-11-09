#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the head of the list
 * @n: the data of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->n = n;
	if (*head == NULL)
		*head = newnode;
	else
	{
		(*head)->prev = newnode;
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
