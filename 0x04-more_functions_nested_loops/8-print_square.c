#include "main.h"

/**
 * print_square - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * @size : 'size' is an int taked from another function
 *
 * Return: void on success
 */

void print_square(int size)
{
int row;
int colums;

for (row = 0; row < size; row++)
{
for (colums = 0; colums < size; colums++)
{
_putchar(35);
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
