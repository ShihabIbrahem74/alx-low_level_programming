#include "lists.h"
/**
 * add_dnodeint_end - for alx task
 * @head: an argument
 * @n: an argument
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *index = *head;

	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (!head || !*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (index->next != NULL)
			index = index->next;
		new->prev = index;
		index->next = new;
	}
	return (new);
}
