#include "lists.h"
/**
 * insert_dnodeint_at_index - for alx task
 * @h: an argument
 * @idx: an argument
 * @n: an arguement
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;

	if (!new)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	new->n = n;
	new->prev = temp;

	if (temp->next == NULL)
	{
		new->next = NULL;
		temp->next = new;
	}
	else
	{
		temp->next->prev = new;
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
