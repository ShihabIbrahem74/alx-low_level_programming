#include "main.h"

/**
 * print_number - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * @n : 'size' is an int taked from another function
 *
 * Return: void on success
 */

void print_number(int n)
{
unsigned int i = n;
if (n < 0)
{
_putchar('-');
i = i * -1;
}
if ((i / 10) > 0)
print_number(i / 10);
_putchar((i % 10) + '0');
}
