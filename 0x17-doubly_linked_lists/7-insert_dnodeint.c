#include "lists.h"
/**
 * insert_dnodeint_at_index - Gets the node at an index of a doubly linked list
 * @head: head node
 * @idx: index to get
 * @n: number to be inserted
 * Return: the new head node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *b = *head, *s = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (s == NULL)
		return (NULL);
	s->n = n;
	while (b != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
				*head = s;
			s->next = b;
			s->prev = b->prev;
			b->prev->next = s;
			b->prev = s;
			return (s);
		}
		b = b->next;
		i++;
	}
	free(s);
	return (NULL);
}
