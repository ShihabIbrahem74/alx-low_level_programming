#include "lists.h"
/**
 * add_dnodeint - for alx task
 * @head: an argument
 * @n: an argument
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}
	if (!*head || !head)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		new->n = n;
		return (new);
	}
	else
	{
		new->prev = NULL;
		new->next = *head;
		new->n = n;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
