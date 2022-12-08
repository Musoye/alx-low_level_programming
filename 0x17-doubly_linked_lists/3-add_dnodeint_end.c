#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of dbl
 * @head: the heda of dbl
 * @n: the n
 * Return: the new linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *back;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	back =  *head;
	while (back->next != NULL)
	{
		back = back->next;
	}
	new->n = n;
	new->next = NULL;
	back->next = new;
	new->prev = back;
	return (*head);
}
