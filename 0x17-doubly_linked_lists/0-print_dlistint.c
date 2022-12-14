#include "lists.h"
/**
 * print_dlistint - Count number of nodes
 * @h: head node of the list
 * Return: length of the list
 */
size_t print_dlistint(dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *b = h;

	while (b != NULL)
	{
		printf("%d\n", b->n);
		i++;
		b = b->next;
	}
	return (i);
}
