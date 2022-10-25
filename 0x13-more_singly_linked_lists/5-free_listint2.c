#include "lists.h"
/**
 * free_listint2 - frees a listint
 * @head: the head node of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (*head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		p = *head;
		(*head) = (*head)->next;
		free(p);
		p = NULL;
	}
	free(*head);
	(*head) = NULL;
}
