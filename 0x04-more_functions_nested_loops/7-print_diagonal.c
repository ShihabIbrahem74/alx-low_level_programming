#include "main.h"

/**
 * print_diagonal - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * @n : 'n' is an int taked from another function
 *
 * Return: void on success
 */

void print_diagonal(int n)
{
int space;
int i;

for (i = 0; i < n; i++)
{
for (space = 0; space < i; space++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
