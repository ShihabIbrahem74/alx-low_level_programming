#include "lists.h"
/**
 * delete_nodeint_at_index - function that prints
 * Description: function that prints all the elements
 * @head: an argument
 * @index: an argument
 * Return: 0 always
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *buffer;
	unsigned int i = 0;

	if (!*head)
	return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (i != index)
	{
		if (!current)
		return (-1);
		buffer = current;
		current = current->next;
		i++;
	}
	buffer->next = current->next;
	free(current);
	return (1);
}
