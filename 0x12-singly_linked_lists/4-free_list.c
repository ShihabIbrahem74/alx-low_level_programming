#include "lists.h"
/**
 * free_list - function that prints
 * Description: function that prints all the elements
 * @head: an argument
 * Return: 0 always
*/
void free_list(list_t *head)
{
	list_t *buffer = head;
	list_t *holder;

	if (!head)
	return;

	while (buffer->next != NULL)
	{
		holder = buffer;
		buffer = buffer->next;
		free(holder->str);
		free(holder);
	}
	free(buffer->str);
	free(buffer);
}
