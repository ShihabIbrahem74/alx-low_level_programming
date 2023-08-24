#include "lists.h"
/**
 * print_list - function that prints
 * Description: function that prints all the elements
 * @h: an argument
 * Return: 0 always
*/
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int counter = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%i] %s\n", current->len, current->str);
		current = current->next;
		counter++;
	}
	return (counter);
}
