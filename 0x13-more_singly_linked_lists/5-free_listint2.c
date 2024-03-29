#include "lists.h"
/* All my headers goes here */

/**
* free_listint2 - frees a linked list
* @head: head of a list
* return: no return
*/


void freelistint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head !=  NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
