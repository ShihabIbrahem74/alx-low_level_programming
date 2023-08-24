#include "lists.h"
/**
 * list_len - function that prints
 * Description: function that prints all the elements
 * @h: an argument
 * Return: 0 always
*/
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int counter = 0;

	while (current != NULL)
	{
		current = current->next;
		counter++;
	}
	return (counter);
}
