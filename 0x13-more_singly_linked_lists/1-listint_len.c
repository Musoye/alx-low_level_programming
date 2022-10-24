#include "lists.h"
/**
 * listint_len - the length of linked list
 * @h: the list
 * Return: the number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;

	if (h == NULL)
		return (0);
	if (h->next != NULL)
	{
		node_num++;
		h = h->next;
	}
	return (node_num + 1);
}
