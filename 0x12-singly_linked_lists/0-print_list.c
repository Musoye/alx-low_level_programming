#include "lists.h"
/**
 * print_list - print element in a singly linked list
 * @h: the linked list
 * Return: number of element in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t node_num = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (%s)\n", 0, "nil");
		else
		{
			printf("[%d] (%s)\n", h->len, h->str);
		}
		h = h->next;
		node_num++;
	}
	/**printf("[%d] (%s)\n", h->len, h->str);*/
	return (node_num);
}
