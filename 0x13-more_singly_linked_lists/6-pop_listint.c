#include "lists.h"
/**
 * pop_listint - Removes the first node of the list
 * @head: the head node of the list
 * Return: data of the first node
 */
int pop_listint(listint_t **head)
{
	listint_t *p = *head;
	int x;

	if (head == NULL || *head == NULL)
		return (0);
	x = p->n;
	*head = p->next;
	free(p);
	return (x);
}
