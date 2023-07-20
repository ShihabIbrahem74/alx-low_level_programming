#include "main.h"

/**
 * print_line - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * @n : 'n' is an int taked from another function
 *
 * Return: void on success
 */

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
_putchar(95);
_putchar('\n');
}
