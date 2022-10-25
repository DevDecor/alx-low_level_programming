#include "lists.h"
/**
 * add_nodeint - prepends to a linked list
 * @head: the head node of the list
 * @n: number to be prepended
 * Return: the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (p == NULL)
		return (NULL);
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
