#include "lists.h"
/**
 * listint_len - Prints linked list of integers
 * @h: head node
 * Return: length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;
	listint_t *curr;

	if (h == NULL)
		return (0);
	curr = (listint_t *)h;
	while (curr->next != NULL)
	{
		c++;
		curr = curr->next;
	}
	return (c + 1);
}
