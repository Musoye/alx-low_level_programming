#include "lists.h"
/**
 * free_listint2 - free linked list
 * @head: free head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
