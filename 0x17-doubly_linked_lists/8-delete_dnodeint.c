#include "lists.h"

/**
 * delete_dnodeint_at_index - delete at index in a DBL
 * @head: the head of the linked list
 * @index: the index
 * Return: 1 on succes and -1 else
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new, *last, *back;
	unsigned int n;

	if (*head == NULL)
	{
		return (-1);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (-1);
	}
	last = *head;
	while (last)
	{
		if (index == n)
		{
			back = last->prev;
			new = last->next;
			last->prev = back;
			last->next = new;
			return (1);
		}
		last = last->next;
		n++;
	}
	return (-1);
}
