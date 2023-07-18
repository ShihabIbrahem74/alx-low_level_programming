#include "main.h"

/**
 * print_alphabet_x10 - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * Return: 0 on success
 */

void print_alphabet_x10(void)
{
int i;
int x;
for (x = 0; x < 10; x++)
{
for (i = 97; i <= 122; i++)
_putchar(i);
_putchar('\n');
}


}
