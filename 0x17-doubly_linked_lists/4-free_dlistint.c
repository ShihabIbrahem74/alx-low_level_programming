#include "lists.h"
/**
 * free_dlistint - for alx task
 * @head: an argument
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *index = head;

	if (!head)
		return;
	while (head->next != NULL)
	{
		index = head->next;
		free(head);
		head = index;
	}
	free(head);
}
