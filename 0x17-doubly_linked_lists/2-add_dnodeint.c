#include "lists.h"
/**
 * add_dnodeint - Adds a node at the beginning of a doubly linked list
 * @head: head node
 * @n: data to be inserted
 * Return: the new head node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *s = malloc(sizeof(dlistint_t));

	if (s == NULL)
		return (NULL);
	s->n = (int)n;
	s->prev = NULL;
	s->next = *head;
	if (*head != NULL)
		(*head)->prev = s;
	*head = s;
	return (s);
}
