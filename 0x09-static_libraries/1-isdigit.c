#include "main.h"

/**
 * _isdigit - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * @c: 'c' is int recieved from another function
 *
 * Return: 0 on success
 */

int _isdigit(int c)
{
int i;

if (c >= 48 && c <= 57)
i = 1;
else
i = 0;

return (i);
}
