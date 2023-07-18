#include "main.h"

/**
 * print_last_digit - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * @n: 'n' is int recieved from another function
 *
 * Return: 0 on success
 */
int print_last_digit(int n)
{
int i;

if (n < 0)
{
i = -1 * (n % 10);
}
else 
{
i = n % 10;
}
_putchar(i + '0');
return (i);
}
