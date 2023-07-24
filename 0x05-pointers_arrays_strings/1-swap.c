#include "main.h"

/**
 * swap_int - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @a: '*a' is a pointer
 *
 * @b: '*b' is a pointer
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
*a = *a ^ *b;
*b = *a ^ *b;
*a = *a ^ *b;
}
