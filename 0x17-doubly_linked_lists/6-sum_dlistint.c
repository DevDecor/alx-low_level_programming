#include "lists.h"
/**
 * sum_dlistint - Adds all the data in a doubly linked list
 * @head: Head node of the list
 * Return: the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
