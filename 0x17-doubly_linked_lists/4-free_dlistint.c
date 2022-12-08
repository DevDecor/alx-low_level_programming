#include "lists.h"
/**
 * free_dlistint - Adds a node at the beginning of a doubly linked list
 * @head: head node
 * Return: the new head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *b = head;

	while (head != NULL)
	{
		b = head->next;
		free(head);
		head = b;
	}
}
