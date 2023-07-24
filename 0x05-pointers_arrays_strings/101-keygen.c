#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * Return: Always 0.
 */

int main(void)
{
int i;
char x;

srand(time(NULL));
while (i <= 2645)
{
x = rand() % 128;
i += x;
putchar(x);
}
putchar(2772 - i);
return (0);
