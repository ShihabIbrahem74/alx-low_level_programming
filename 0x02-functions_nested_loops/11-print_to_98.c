#include "main.h"

/**
 * print_to_98 - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * @n: first int to add
 *
 * Return: 0 on success
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
printf("%d, ", i);
else
printf("%d", i);
}
}
else
{
for (i = n; i >= 98; i--)
{
if (i != 98)
printf("%d, ", i);
else
printf("%d", i);
}
}
_putchar('\n');
}
