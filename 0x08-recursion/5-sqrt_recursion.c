#include "main.h"

/**
 *  root - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @n: '*s' is a pointer
 *
 * @i: 'i' is an integer
 *
 * Return: Always 0.
 */

int root(int n, int i);

int root(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i < n)
{
i = root(n, i + 1);
return (i);
}
else
return (-1);
}

/**
 * _sqrt_recursion - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx that is called in another fucntion
 *
 * @n: '*s' is a pointer
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
int result;

result = root(n, 1);
return (result);
}
