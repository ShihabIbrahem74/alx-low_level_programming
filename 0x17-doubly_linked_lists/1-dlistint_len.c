#include "lists.h"
/**
 * dlistint_len - for alx task
 * @h: an argument
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}
	return (count + 1);
}
