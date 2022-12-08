#include "lists.h"
/**
 * delete_dnodeint_at_index - ix of a doubly linked list
 * @head: head node
 * @index: index to get
 * Return: the new head node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *b = *head, *s;
	unsigned int i = 0;

	while (b != NULL)
	{
		if (i == index)
		{
			s = b;
			if (index != 0 && b->prev != NULL)
				b->prev->next = b->next;
			else
			{
				*head = b->next;
			}
			if (i != (unsigned int)(dlistint_len(*head) - 1))
				b->next->prev = b->prev;
			else
				b->prev->next = NULL;
			free(s);
			return (1);
		}
		b = b->next;
		i++;
	}
	return (-1);
}
