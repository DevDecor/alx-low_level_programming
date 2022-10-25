#include "lists.h"
size_t print_listint(const listint_t *h)
{
	size_t c = 0;
	listint_t *curr;

	if (h == NULL)
		return (0);
	curr = (listint_t *)h;
	while (curr->next != NULL)
	{
		c++;
		printf("%d\n", curr->n);
		curr = curr->next;
	}
	printf("%d\n", curr->n);
	return (c + 1);
}
