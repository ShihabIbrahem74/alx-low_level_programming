#include "main.h"
#include <math.h>

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
int abs;

if (n >= 0)
{
i = n;
}
else
{
abs = n*n;
i = sqrt(abs);
}


return (i);
}
