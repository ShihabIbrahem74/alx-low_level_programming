#include "lists.h"
/**
 * free_listint - function that prints
 * Description: function that prints all the elements
 * @head: an argument
 * Return: 0 always
*/
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *buffer;

	if (head == NULL)
	{
		return;
	}
	current = head;
	while (current->next != NULL)
	{
		buffer = current;
		current = current->next;
		free(buffer);
	}
	free(current);
}
