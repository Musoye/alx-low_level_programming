#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of dbl
 * @head: the heda of dbl
 * @n: the n
 * Return: the new linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *back;

	back = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NuLL)
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
	while (back != NULL)
	{
		back = back->next;
	}
	new->n = n;
	new->prev = back;
	new->next = NULL;
	return (*head);
}
