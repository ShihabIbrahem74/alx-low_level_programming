#include "main.h"
/**
 * print_diagsums - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @a: '*s' is a pointer
 *
 * @size: 'size' is an integer
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int i, temp = 0, temp2 = 0;

for (i = 0; i < (size * size); i++)
{
if (i == 0 || i == temp + size + 1)
{
sum1 = sum1 + a[i];
temp = i;
}

if (i == temp2 + size - 1 && i != (size * size) - 1)
{
sum2 = sum2 + a[i];
temp2 = i;
}
}

printf("%d, %d\n", sum1, sum2);
}
