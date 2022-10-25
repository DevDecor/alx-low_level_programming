#include "lists.h"
void free_listint(listint_t *head)
{
	listint_t *p;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
	free(head);
}
