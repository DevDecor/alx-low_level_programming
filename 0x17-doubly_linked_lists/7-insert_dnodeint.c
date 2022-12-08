#include "lists.h"
#include "1-dlistint_len.c"
/**
 * insert_dnodeint_at_index - Adds node at an index of a doubly linked list
 * @h: head node
 * @idx: index to get
 * @n: number to be inserted
 * Return: the new head node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *b = *h, *s;
	unsigned int i = 0;

	if (idx == (unsigned int)dlistint_len(*h))
		return (add_dnodeint_end(h, (const int)n));
	while (b != NULL)
	{
		if (i == idx)
		{
			s = malloc(sizeof(dlistint_t));
			if (s == NULL)
				return (NULL);
			s->n = n;
			if (i == 0)
				*h = s;
			s->next = b;
			s->prev = b->prev;
			b->prev->next = s;
			b->prev = s;
			return (s);
		}
		b = b->next;
		i++;
	}
	return (NULL);
}
