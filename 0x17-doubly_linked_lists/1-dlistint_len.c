#include "lists.h"
/**
 * print_dlistint - Count number of nodes
 * @h: head node of the list
 * Return: length of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *b;

	while (b != NULL)
	{
		i++;
		b = b->next;
	}
	return (i);
}
