#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: the head:
 * @idx: the index
 * @n: what to add
 * Return: new nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *last, *back;
	unsigned int r = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	last = *h;
	while (last)
	{
		if (idx == r)
		{
			new->n = n;
			back = h->prev
			new->next = h;
			new->prev = back;
			return (*h);
		}
		last = last->next;
		r++;
	}
	return (NULL)
}
