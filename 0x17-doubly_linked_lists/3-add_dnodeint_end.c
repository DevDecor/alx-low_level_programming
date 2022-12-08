#include "lists.h"
/**
 * add_dnodeint_end - Adds a node at the beginning of a doubly linked list
 * @head: head node
 * @n: data to be inserted
 * Return: the new head node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *s = malloc(sizeof(dlistint_t)), *b = *head;

	if (s == NULL)
		return (NULL);
	s->n = (int)n;
	s->next = NULL;
	if (*head == NULL)
	{
		s->prev = NULL;
		return (s);
	}
	while (b->next != NULL)
		b = b->next;
	s->prev = b;
	b->next = s;
	return (s);
}
