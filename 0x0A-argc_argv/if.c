#include <stdio.h>
#include <stdlib.h>

/**
 * main - calls another function called _putchar
 *
 * Description: for alx task 0
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
int x;
int f = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
if (x < 0)
printf("0\n");
else
{
while (x >= 25)
{
x = x - 25;
f++;
}
while (x >= 10)
{
x = x - 10;
f++;
}
while (x >= 5)
{
x = x - 5;
f++;
}
while (x >= 2)
{
x = x - 2;
f++;
}
while (x >= 1)
{
x = x - 1;
f++;
}
printf("%d\n", f);
}
return (0);
}
