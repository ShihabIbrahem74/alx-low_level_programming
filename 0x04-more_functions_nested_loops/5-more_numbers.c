#include "main.h"

/**
 * more_numbers - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * Return: void on success
 */

void more_numbers(void)
{
int row;
int i;
int count;

for (row = 0; row < 10; row++)
{
for (count = 0; count <= 14; count++)
{
i = count;
if (count > 9)
{
_putchar(49);
i = count % 10;
}
_putchar(i + '0');
}
_putchar('\n');
}
}
