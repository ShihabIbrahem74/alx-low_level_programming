#include "lists.h"
/**
 * sum_dlistint - for alx task
 * @head: an argument
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
