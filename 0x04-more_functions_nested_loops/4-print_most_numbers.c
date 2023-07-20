#include "main.h"

/**
 * print_most_numbers - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * Return: void on success
 */

void print_most_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
{
if (i != 50 && i != 52)
_putchar(i);
}
_putchar('\n');
}
