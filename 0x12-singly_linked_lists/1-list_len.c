#include "lists.h"
/**
 * list_len - number of element in a linked list
 * @h: the linked list
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num += 1;
		h = h->next;
	}
	return (num);
}
