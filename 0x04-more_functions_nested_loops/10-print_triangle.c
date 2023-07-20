#include "main.h"

/**
 * print_triangle - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * @size : 'size' is an int taked from another function
 *
 * Return: void on success
 */

void print_triangle(int size)
{
int row;
int space;
int sign;

for (row = 1; row <= size; row++)
{
for (space = size - row; space > 0; space--)
_putchar(' ');
for (sign = 0; sign < row; sign++)
_putchar(35);
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
