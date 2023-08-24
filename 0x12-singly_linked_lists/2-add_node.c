#include "lists.h"
/**
 * _strlen - calulate the length of string
 * Description: it calulate the string passed to _puts
 * @s: '*s' is a pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}

/**
 * add_node - function that prints
 * Description: function that prints all the elements
 * @head: an argument
 * @str: an argument
 * Return: 0 always
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen((char *)str);
	new->next = *head;
	*head = new;
	return (*head);
}
