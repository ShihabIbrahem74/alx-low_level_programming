#include "main.h"
/**
 *  _pow_recursion - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @x: '*s' is a pointer
 *
 * @y: '*s' is a pointer
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
{
x = x *_pow_recursion(x, y - 1);
return (x);
}
}
