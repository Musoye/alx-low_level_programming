#include "lists.h"

/**
 * get_dnodeint_at_index - get elem with index from dbl
 * @head: the head of doubly linked list
 * @index: the index to search from
 * Return: the node of index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (index == n)
		{
			return (head);
		}
		head = head->next;
		n++;
	}
	return (NULL);
}
