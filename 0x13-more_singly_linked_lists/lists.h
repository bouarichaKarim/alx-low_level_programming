#ifndef _LISTS_
#define  _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly lined list
 * @n: integer
 * @next: point to thenext node
 *
 * Description: singly linked list node sructure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif