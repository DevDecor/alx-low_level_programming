#include "lists.h"
/**
 * add_node_end - adds a node to alist
 * @head: head node
 * @str: string data
 * Author: Tiamiyu Abdussomad Olanrewaju
 * Return: the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *end = *head;

	if (new == NULL)
		return (NULL);
	new->str = malloc(strlen(str) + 1);
	if (new->str != NULL)
		strcpy(new->str, str);
	new->len = strlen(str);
	new->next = NULL;
	if (end == NULL)
	{
		*head = new;
		return (new);
	}
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new;
	return (new);
}
