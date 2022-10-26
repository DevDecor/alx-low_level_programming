#include "lists.h"
#include "1-listint_len.c"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *p = head;

	if (p == NULL)
		return (NULL);
	if (listint_len(head) <= index)
	{
		return (NULL);
	}
	while (p != NULL)
	{
		if (x == index)
		{
			break;
		}
		x++;
		p = p->next;
	}
	return (p);
}
