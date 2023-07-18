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
	char x[] = "_putchar";

	for (i = 0; i < 8; i++)
		_putchar(x[i]);

	return (0);
}
