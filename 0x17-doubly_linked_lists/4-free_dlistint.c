#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: the head of the list
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *del;

	while (head != NULL)
	{
		del = head->next;
		free(head);
		head = del;
	}
}
