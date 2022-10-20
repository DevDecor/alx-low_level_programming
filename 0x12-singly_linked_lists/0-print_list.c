#include "lists.h"
/**
 * print_list - Prints the valuse in a linked list
 * @h: head
 * Return: number of nodes on the list
 */
size_t print_list(list_t *h)
{
	int count = 0;
	list_t *p;

	if (h == NULL)
		return (0);
	p = (list_t *)h;
	while (p != NULL)
	{
		count++;
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		p = p->next;
	}
	return (count);
}
