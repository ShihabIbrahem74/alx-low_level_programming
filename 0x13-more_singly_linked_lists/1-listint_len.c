#include "lists.h"
/**
 * listint_len - function that prints
 * Description: function that prints all the elements
 * @h: an argument
 * Return: 0 always
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	int n = 0;

	while (ptr)
	{
		ptr = ptr->next;
		n++;
	}
	return (n);
}
