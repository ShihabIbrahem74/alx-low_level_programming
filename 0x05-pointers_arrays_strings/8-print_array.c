#include "main.h"
#include <stdio.h>

/**
 * print_array - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @a: '*a' is a pointer
 *
 * @n: 'n' is an integer
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n - 1; i++)
printf("%d, ", a[i]);
printf("%d\n", a[n - 1]);
}
else
printf("\n");
}
