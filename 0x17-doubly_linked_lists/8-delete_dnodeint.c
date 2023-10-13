#include "lists.h"
/**
 * delete_dnodeint_at_index - for alx task
 * @head: an argument
 * @index: an argument
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		if (!(*head)->next)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		(*head) = (*head)->next;
		free((*head)->prev);
		if ((*head) != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	if (temp->next == NULL)
	{
		free(temp);
		return (1);
	}
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
