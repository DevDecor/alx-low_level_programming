#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dlistint - list int structure
 * @n: integer data
 * @next: next node
 * @prev: previous node
 */
typedef struct dlistint
{
	int n;
	struct dlistint *next;
	struct dlistint *prev;
} dlistint_t;
size_t dlistint_len(dlistint_t *h);
size_t print_dlistint(dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
#endif
