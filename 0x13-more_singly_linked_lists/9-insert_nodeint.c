#include "lists.h"
/**
 * insert_nodeint_at_index - function that prints
 * Description: function that prints all the elements
 * @head: an argument
 * @idx: an argument
 * @n: an argument
 * Return: 0 always
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *new;
	unsigned int i = 0;

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	while (i != (idx - 1))
	{
		if (!current)
		return (NULL);
		current = current->next;
		i++;
	}
		new = malloc(sizeof(listint_t));
		if (!new)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		new->next = current->next;
		current->next = new;
		return (new);
}
