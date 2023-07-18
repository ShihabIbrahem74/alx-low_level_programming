#include "main.h"

/**
 * print_sign - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * @n: 'n' is int recieved from another function
 *
 * Return: 0 on success
 */

int print_sign(int n)
{
int i;

if (n > 0)
{
_putchar('+');
i = 1;
}
else if (n < 0)
{
_putchar('-');
i = -1;
}
else
{
_putchar('0');
i = 0;
}

return (i);
}
