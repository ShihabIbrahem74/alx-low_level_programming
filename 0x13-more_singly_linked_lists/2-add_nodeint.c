#include "lists.h"
/**
 * add_nodeint - function that prints
 * Description: function that prints all the elements
 * @head: an argument
 * @n: an argument
 * Return: 0 always
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = malloc(sizeof(listint_t));

	if (!current)
	{
		free(current);
		return (NULL);
	}
	current->n = n;
	current->next = *head;
	*head = current;

	return (*head);
}
