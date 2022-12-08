#include "lists.h"
/**
 * dlistint_len - Count number of nodes
 * @h: head node of the list
 * Return: length of the list
 */
size_t dlistint_len(dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *b = h;

	while (b != NULL)
	{
		i++;
		b = b->next;
	}
	return (i);
}
