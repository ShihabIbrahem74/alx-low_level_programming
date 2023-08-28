#include "lists.h"
/**
 * sum_listint - function that prints
 * Description: function that prints all the elements
 * @head: an argument
 * Return: 0 always
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
