#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: the head of the list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
