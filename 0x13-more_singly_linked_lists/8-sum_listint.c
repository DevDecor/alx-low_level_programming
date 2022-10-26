#include "lists.h"
/**
 * sum_listint - Prints linked list of integers
 * @head: head node
 * Return: sum of the list
 */
int sum_listint(listint_t *head)
{
	size_t c = 0;
	listint_t *curr;

	if (head == NULL)
		return (0);
	curr = (listint_t *)head;
	while (curr != NULL)
	{
		c += curr->n;
		curr = curr->next;
	}
	return (c);
}
