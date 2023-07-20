#include "main.h"

/**
 * print_numbers - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * Return: void on success
 */

void print_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
_putchar(i);
_putchar('\n');
}
