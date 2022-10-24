#include "lists.h"
/**
 * print_listint - print integer
 * @h: the element containing the list
 * Return: the node of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_num = 1;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num++;
	}
	printf("%d\n", h->n);
	return (node_num);
}
