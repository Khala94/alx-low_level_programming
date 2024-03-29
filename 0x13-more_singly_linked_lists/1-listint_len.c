#include "lists.h"
/* All my headers goes here */

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of a list
 * return: number of nodes
 */

size_t listint_len(const listint_t *h)
{

	size_t nnodes = 0;

	while (h !- NULL)
	{
		h =->next;
		nnodes++;
	}

	return (nnodes);
}
