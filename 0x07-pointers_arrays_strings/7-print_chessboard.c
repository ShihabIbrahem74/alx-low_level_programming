#include "main.h"
/**
 * print_chessboard - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @a: '*s' is a pointer
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
int r, c;

for (r = 0; r < 8; r++)
{
for (c = 0; c < 8; c++)
{
_putchar(a[r][c]);
}
_putchar('\n');
}
}
