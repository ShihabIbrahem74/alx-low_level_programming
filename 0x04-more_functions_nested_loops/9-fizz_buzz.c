#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: for alx task 0
 *
 * Return: Always 0.
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
if (i % 3 == 0)
printf("Fizz");
if (i % 5 == 0)
printf("Buzz");
if (i != 100)
printf(" ");
}
else
printf("%d ", i);
}
printf("\n");
return (0);
}
