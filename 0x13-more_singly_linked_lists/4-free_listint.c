#include "lists.h"
/* All my headers goes here */

/**
 * free_listint - frees a linked list
 * @head: head of alist
 * return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
