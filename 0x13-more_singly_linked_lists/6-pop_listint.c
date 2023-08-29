#include "lists.h"
/**
 * pop_listint - function that prints
 * Description: function that prints all the elements
 * @head: an argument
 * Return: 0 always
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int buffer;

	if (!*head || !head)
	{

		return (0);
	}
	buffer = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (buffer);
}
