#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @h: the head of the linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int size;
	dlistint_t *head;

	head = h;
	size = 0;
	if (head == NULL)
	{
		return (0)
	}
	while (head != NULL)
	{
		printf("%i\n", head->n);
		head = head->next;
		size++;
	}
	return (size);
}
