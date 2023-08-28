#include "lists.h"
/**
 * print_listint - function that prints
 * Description: function that prints all the elements
 * @h: an argument
 * Return: 0 always
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int n = 0;

	if (!ptr)
	return (0);

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}
	return (n);
}
