#include "lists.h"
/**
 * get_nodeint_at_index - function that prints
 * Description: function that prints all the elements
 * @head: an argument
 * @index: an argument
 * Return: 0 always
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	int counter = 0;

	while (counter != index)
	{
		if (!current)
		return (NULL);
		current = current->next;
		counter++;
	}
	return (current);
}
