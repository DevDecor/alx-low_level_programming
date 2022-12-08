#include "lists.h"
/**
 * insert_dnodeint_at_index - Gets the node at an index of a doubly linked list
 * @head: head node
 * @idx: index to get
 * @n: number to be inserted
 * Return: the new head node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t *head, unsigned int idx, int n)
{
	dlistint_t *b = head, *s = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (s == NULL)
		return (NULL);
	s->n = n;
	if (b == NULL)
		return (head = s);
	while (b != NULL)
	{
		if (i == index)
		{
			s->next = b->next;
			s->prev = b;
			b->next = s;
			return (s);
		}
		b = b->next;
		i++;
	}
	return (NULL);
}
