#include "main.h"

/**
 * times_table - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * Return: 0 on success
 */
void times_table(void)
{
int rows;
int sum;
int col;

for (rows = 0; rows < 10; rows++)
{

for (col = 0; col < 10; col++)
{
if (col > 0)
{
sum = rows * col;
_putchar(',');
if (sum <= 9)
{
_putchar(' ');
_putchar(' ');
_putchar(sum + '0');
}
else
{
_putchar(' ');
_putchar((sum / 10) + '0');
_putchar((sum % 10) + '0');
}
}
else
{
_putchar(0 + '0');
}
}
_putchar('\n');
}
}
