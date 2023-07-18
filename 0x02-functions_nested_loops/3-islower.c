#include "main.h"

/**
 * _islower - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * @c: 'c' is int recieved from another function
 *
 * Return: 0 on success
 */

int _islower(int c)
{
int i;

if (c >= 97 && c <= 122)
i = 1;
else
i = 0;

return (i);
}
