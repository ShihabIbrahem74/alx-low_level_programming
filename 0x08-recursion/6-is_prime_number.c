#include "main.h"
int prime(int n, int i);

/**
 * is_prime_number - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @n: '*s' is a pointer
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
int res;
res = prime(n, 2);
return (res);
}

/**
 * prime - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @n: '*s' is a pointer
 *
 * @i: 'i' is a counter
 *
 * Return: Always 0.
 */

int prime(int n, int i)
{
if (n < 2 || (n % i == 0 && n != i))
return (0);
else if (n % i != 0)
{
i = prime(n, i + 1);
return (i);
}
else
return (1);
}
