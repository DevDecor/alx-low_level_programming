#include "lists.h"
/**
 * get_dnodeint_at_index - Gets the node at an index of a doubly linked list
 * @head: head node
 * @index: index to get
 * Return: the new head node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *b = head;
	unsigned int i = 0;

	while (b != NULL)
	{
		if (i == index)
			return (b);
		b = b->next;
		i++;
	}
	return (NULL);
}
