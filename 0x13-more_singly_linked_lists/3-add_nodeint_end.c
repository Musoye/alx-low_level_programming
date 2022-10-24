#include "lists.h"
/**
 * add_nodeint_end - add new node at the end
 * @head: the pointer to the linked list
 * @n: the integer to add
 * Return: the adress of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *dup;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	dup = *head;
	if (dup == NULL)
		*head = new;
	else
	{
		while (dup->next != NULL)
		{
			dup = dup->next;
		}
		dup->next = new;
	}
	return (new);
}
