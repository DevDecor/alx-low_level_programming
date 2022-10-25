#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	p->n = n;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
		return (*head);
	}

	p->next = *head;
	*head = p;
	return (*head);
}
