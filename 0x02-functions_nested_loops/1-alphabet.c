#include "main.h"

/**
 * print_alphabet - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
        int i;

        for (i = 97; i <= 122; i++)
                _putchar(i);
        _putchar('\n');

}
