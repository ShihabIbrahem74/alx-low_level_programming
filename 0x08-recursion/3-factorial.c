#include "main.h"
/**
 * factorial - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @n: '*s' is a pointer
 *
 * Return: Always 0.
 */

int factorial(int n)
{
int i;
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
{
i = n * factorial(n - 1);
return (i);
}
}
