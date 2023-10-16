#include "main.h"

/**
 * _abs - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * @n: 'n' is int recieved from another function
 *
 * Return: 0 on success
 */

int _abs(int n)

{
int i;

if (n >= 0)
{
i = n;
}
else
{
i = n - n - n;
}


return (i);
}
