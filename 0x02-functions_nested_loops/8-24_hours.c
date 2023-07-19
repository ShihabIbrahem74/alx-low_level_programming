#include "main.h"

/**
 * jack_bauer - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * Return: 0 on success
 */
void jack_bauer(void)
{
int hours1;
int hours2;
int min1;
int min2;

for (hours1 = 0; hours1 <= 2; hours1++)
{
for (hours2 = 0; hours2 <= 9; hours2++)
{
for (min1 = 0; min1 <= 5; min1++)
{
for (min2 = 0; min2 <= 9; min2++)
{
if (hours1 < 2 || hours2 <= 3)
{
_putchar(hours1 + '0');
_putchar(hours2 + '0');
_putchar(':');
_putchar(min1 + '0');
_putchar(min2 + '0');
_putchar('\n');
}
}
}
}
}
}
