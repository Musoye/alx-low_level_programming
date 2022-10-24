#include "lists.h"
/**
 * add_nodeint- add new node to linked list
 * @head: the head
 * @n: the neww added element
 * Return: the new added element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int a;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	a = n;
	/**
	* if (!a)
	*{
	*	free(new);
	*	return (NULL);
	*}
	*/
	new->n = a;
	new->next = *head;
	*head = new;
	return (new);
}
