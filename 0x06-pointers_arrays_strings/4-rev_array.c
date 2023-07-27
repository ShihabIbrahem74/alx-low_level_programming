#include "main.h"
/**
 * reverse_array - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @a: '*a' is a pointer
 * @n: 'n' is an integer
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i = 0;
n--;
while (i < n)
{
a[i] = a[i] ^ a[n];
a[n] = a[i] ^ a[n];
a[i] = a[i] ^ a[n];
i++;
n--;
}
}
