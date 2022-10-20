#include "lists.h"
/**
 * list_len - Prints the valuse in a linked list
 * @h: head
 * Return: number of nodes on the list
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	list_t *p;

	if (h == NULL)
		return (0);
	p = (list_t *)h;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}
