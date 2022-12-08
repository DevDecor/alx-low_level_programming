#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
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
#endif
