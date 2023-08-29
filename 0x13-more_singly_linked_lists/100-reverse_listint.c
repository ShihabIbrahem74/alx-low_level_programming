#include "lists.h"
/**
 * reverse_listint - function that prints
 * Description: function that prints all the elements
 * @head: an argument
 * Return: 0 always
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *new;

	if (*head)
	{
	current = (*head)->next;
	(*head)->next = NULL;
	}
	while (current)
	{
		new = current;
		current = current->next;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
