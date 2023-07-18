#include "main.h"

/**
 * main - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');

	return (0);
}
