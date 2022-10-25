#include "lists.h"
/**
 * add_nodeint_end - appends a linked list
 * @head: head node of the list
 * @n: data to be appended
 * Return: pointer to the new data
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));
	listint_t *h = *head;

	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = NULL;
	if (h == NULL)
		return (p);
	while (h->next != NULL)
		h = h->next;
	h->next = p;
	return (p);
}
