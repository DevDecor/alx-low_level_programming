#include "lists.h"
/**
 * free_list - Frees the allocated memories for a linked list
 * @head: the head node of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *this;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		this = head;
		head = head->next;
		free(this);
		this = NULL;
	}
	free(head);
	head = NULL;
}
