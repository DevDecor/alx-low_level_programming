#include "lists.h"
/**
 * add_node - adds a node to alist
 * @head: head node
 * @str: string data
 * Author: Tiamiyu Abdussomad Olanrewaju
 * Return: the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
