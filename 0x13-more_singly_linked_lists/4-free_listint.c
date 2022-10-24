#include "lists.h"
/**
 * free_listint - fee linked list
 * @head: the pointer to the linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
