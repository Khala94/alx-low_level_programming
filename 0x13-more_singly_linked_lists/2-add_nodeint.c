#include "lists.h"
/* All my headers goes here */

/**
 * add_nodeint - add a new node at the begining
 * @head: head of a list
 * @n: n element
 * return: address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
